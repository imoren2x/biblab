#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
"""

import os
import os.path
import sys
import time
import logging
import optparse
import collections

PROGRAM_SYNTAX = "%prog -e/--extension <string> [-b/--basedir <string>] [-d/--dry-run] [-v/--verbose]"

DEBUG = False

"""

"""


def setup_logger(name, formatter_str=None):
    """
    """
    default_formatter = "%(asctime)-15s %(name)-7s %(levelname)-7s %(message)s"

    local_logger = logging.getLogger(name)
    local_logger.setLevel(logging.INFO)

    if formatter_str is None:
        formatter_str = default_formatter
    formatter = logging.Formatter(formatter_str)

    console_handler = logging.StreamHandler(sys.stdout)
    console_handler.setFormatter(formatter)
    local_logger.addHandler(console_handler)

    return local_logger


logger = setup_logger("MAIN", )


def setup_optparse():
    """
    """
    if len(sys.argv[1:]) == 0:
        msg = " This script needs at least one argument to indicate the file extension to check for " + \
              "trailing spaces\n" + \
              "  Please, use the syntax: \n" + \
              "  $> python %s" % PROGRAM_SYNTAX.replace("%prog", sys.argv[0])

        raise Exception(msg)

    parser = optparse.OptionParser(
        usage="%s \n" % PROGRAM_SYNTAX +
              "e.g., %prog -e .py --dry-run",
        version="%prog 1.0"
    )

    parser.add_option("-e", "--extension",
                      type="string",
                      dest="extension",
                      help="Extension file to check for trailing spaces, e.g. .py")

    parser.add_option("-b", "--basedir",
                      dest="basedir",
                      default=os.getcwd(),
                      help="The root folder where to start seeking for files "
                           "(by default, the currently working directory).")

    parser.add_option("-d", "--dry-run",
                      dest="dry_run",
                      action="store_true",
                      help="If present, the program searches for trailing spaces, "
                           "but no actual change is done on any file.")
    parser.add_option("-v", "--verbose",
                      dest="verbose",
                      action="store_true",
                      help="If present, there are more log lines than if not present.")
    parser.add_option("-r", "--report",
                      dest="report",
                      action="store_true",
                      help="If present, at the end of the execution a summary report is logged.")

    # Parse the actual arguments
    (options, args) = parser.parse_args()

    if options.verbose:
        logger.setLevel(logging.DEBUG)

    logger.debug("%-15s: %s" % ("Options", options))
    logger.debug("%-15s: %s" % ("Arguments", args))

    return options, args


"""
Named-tuple structure intended to model a file that contains trailing spaces
that need to be trimmed.
Contains two fields: the filepath and a list of the lines needed to be trimmed,
whose range goes from zero (first line) to the len-1 (last line).
"""
Trail_space_file_gen = collections.namedtuple(
    'TS_filepath',
    ['filepath', 'indexes'],
    defaults=('', [])
)


class TrimTrailingSpaces(object):

    def __init__(self, *args, **kwargs):
        """
        Parses the input arguments and saves their options
        as class members.
        Also, stores a list of trailing-space files to change.
        """
        self.options, self.args = setup_optparse()

        # Check if extension contains one or several
        self.extensions = [elem.strip().lower() for elem in self.options.extension.split(",")]
        self.basedir = self.options.basedir
        self.dry_run = self.options.dry_run
        self.verbose = self.options.verbose
        self.report = self.options.report

        self.files_to_change = collections.OrderedDict([(ext, list()) for ext in self.extensions])
        self.error_files = collections.OrderedDict([(ext, list()) for ext in self.extensions])

        return

    def pre_run(self):
        """
        Method that checks all the files in the base dir that match the extension.
        In positive case, scans the file lines in search of trailing spaces.
        If trailing spaces are found, the file path and those lines are saved for
        post-processing in the run method.

        As outcome, the files matching the extension as argument for the
        __scan_files method.
        """
        logger.info("PreRun method starts")

        for extension in self.extensions:

            for root, dirs, files in os.walk(self.basedir):
                # Check if files in the current folder match the extension
                matching_files = [file for file in files if os.path.splitext(file)[1].lower() ==
                                  extension]
                self.__scan_files(extension, root, matching_files)

            if len(self.files_to_change) > 0:
                logger.info(16 * "-")
                logger.info("Extension %s, total files to change: %d"
                            % (extension, len(self.files_to_change.get(extension))))
                logger.info(16 * "-")

        logger.info("PreRun method ends")

        return

    def __scan_files(self, extension, root, files):
        """
        Method that receives the files that match the extension on the root folder to scan
        each one of them one by one, searching for trailing spaces.
        """
        for _file in files:
            file_path = os.path.join(root, _file)
            logger.debug("File to scan: %s" % file_path)
            self.__scan_file(extension, file_path)

        return

    def __scan_file(self, extension, filepath):
        """
        Method that runs over a file using its file path searching for a trailing space within.
        In positive case, saves the information of the file path and the lines to trim.
        In negative case, does nothing to the file.
        """
        trail_lines = []

        with open(filepath, 'r') as file_d:
            try:
                lines = file_d.readlines()
            except UnicodeDecodeError as e:
                logger.error("File can't be read: %s" % filepath)
                error_file = Trail_space_file_gen(filepath=filepath)
                self.error_files.get(extension).append(error_file)

            counter = len(lines)

            for index in range(0, counter):
                line = lines[index]
                normalised_line = line.rstrip("\n")
                # Check if trailing spaces
                if len(normalised_line) != len(normalised_line.rstrip()):
                    trail_lines.append(index)

        if len(trail_lines) > 0:
            logger.info("%-20s %s" % ("File to correct:", filepath))
            logger.info("%-20s %d" % ("Lines to correct:", len(trail_lines)))
            output = Trail_space_file_gen(filepath=filepath, indexes=trail_lines)
            self.files_to_change.get(extension).append(output)

        return

    def run(self):
        """
        Runs over the list of files to change and trims the files with trailing spaces.
        """
        logger.info("Run method starts")

        for extension in self.extensions:
            files_to_change = self.files_to_change.get(extension)
            for file_to_change in files_to_change:
                self.__trim_trailing_spaces(file_to_change.filepath, file_to_change.indexes)

        logger.info("Run method ends")

        return

    def __trim_trailing_spaces(self, file_path, trail_line_indexes):
        """
        Trims a file that contains trailing spaces using its file_path.

        @param file_path: Path of the file to trim.
        @type file_path: str

        @param trail_line_indexes: list of line indexes of the file path that contain trailing spaces.
        @type trail_line_indexes: list(int)
        """
        with open(file_path, 'r') as file_d:
            lines = file_d.readlines()

            for trail_line_index in trail_line_indexes:
                lines[trail_line_index] = "%s\n" % lines[trail_line_index].rstrip()

        if self.dry_run:
            logger.warning("DRY-RUN: File skipped due to dry-run execution (%s)" % file_path)
            return

        with open(file_path, 'w') as file_h:
            file_h.writelines(lines)

        logger.info("File corrected (%s)" % file_path)

        return

    def post_run(self):
        """
        Final method that displays statistical information about the files.
        """
        logger.info("PostRun method starts")

        if not self.report:
            return

        logger.info(16 * "-")
        for extension in self.extensions:

            files_to_change = self.files_to_change.get(extension)
            logger.info("Extension: %s" % extension)

            logger.info("Total files to change: %d" % len(files_to_change))
            if self.dry_run:
                logger.info("Mode: Dry-run")

            for file_to_change in files_to_change:
                logger.info("File: %s" % file_to_change.filepath)
                logger.info("Lines to change: %s" % len(file_to_change.indexes))

            if self.dry_run and len(files_to_change) > 1:
                logger.info("DRY-RUN: no change has been applied")

            error_files = self.error_files.get(extension)
            if len(error_files) > 0:
                logger.info("Total Error files: %d" % len(error_files))
                for error_file in error_files:
                    logger.info("Error file: %s" % error_file)

            logger.info(16 * "-")

        logger.info("PostRun method ends")

        return

    def main(self):

        self.pre_run()
        if DEBUG:
            import pdb
            pdb.set_trace()
        self.run()
        if DEBUG:
            import pdb
            pdb.set_trace()
        self.post_run()

        return


if __name__ == "__main__":
    tts = TrimTrailingSpaces()
    tts.main()

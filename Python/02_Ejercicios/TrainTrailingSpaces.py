import logging
import os
import os.path
import sys
import time

"""
TSTScript -b/--basedir <string> -d/--disable <bool> -e/--extension <string> -r/--report [min|std(default)|max]


"""

# def tst_scripts(options):

    # # get files

    # # foreach process file
        # # if tab, change tab
        # # if trailing,
        # # if end of file

        # # if enable_write


def get_logger(name, formatter_str=None):
    logger = logging.getLogger(name)
    logger.setLevel(logging.DEBUG)
    formatter = logging.Formatter(formatter_str)
    console_handler = logging.StreamHandler()
    console_handler.setFormatter(formatter)
    logger.addHandler(console_handler)

    return logger

logger = get_logger("MAIN", )

BASEPATH = r'C:\Users\Patricia\Workspace\biblab'
FILEPATHS = [os.path.join(BASEPATH, elem) for elem in ["C", "Cpp", "Extras", "Java", "Java_Android", "Linux", "Python", ]]
EXTENSIONS = [".py", ".h", ".c", ".java", ".cpp", ".hpp", ".cs", ".txt", ".log", ".md", ".tcl", ".pl", ".tex", ]
ENABLE_WRITE = True
SLEEP_TIME = float(.5)

def main():
    logger.info("BEGIN!")
    count = 0
    match_count = 0

    for filepath in FILEPATHS:
        for root, dirs, files in os.walk(filepath):
            logger.info("Root: %s" % root)
            for _file in files:
                match_count = 0
                new_lines = list()

                if os.path.splitext(_file)[1].lower() not in EXTENSIONS:
                    continue

                path = os.path.join(root, _file)
                logger.info("  File: %s" % _file)
                # read file
                with open(path, 'r') as filehandler:
                    try:
                        lines = filehandler.readlines()
                    except:
                        logger.error("  ERROR reading, skipping")
                        continue
                    for line in lines:
                        if line.rstrip('\n') != line.rstrip('\n').rstrip():
                            match_count =+ 1
                            new_lines.append(line.rstrip() + '\n')
                        else:
                            new_lines.append(line)

                if ENABLE_WRITE and (match_count > 0):
                    logger.info("    Lines to be corrected: %d" % match_count)
                    with open(path, 'w') as filehandler:
                        filehandler.writelines(new_lines)
                    logger.info("    File changed")
                    count += 1
                elif match_count > 0:
                    count += 1
                    logger.info("    File needs %d lines to be corrected" % match_count)

            time.sleep(SLEEP_TIME)

    logger.info("Number of files to change: %d" % count)


if __name__ == "__main__":
    main()

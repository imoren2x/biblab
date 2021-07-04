#!/usr/bin/python
# -*- coding: utf-8 -*-
"""
"""

import os
import sys
import time
import re
import datetime


REGEX_HEAD_1 = re.compile(r'RetroEntreAmigos \d{1,2}x\d{1,2} - .*? \(\d{4}-\d{2}, \d{1,2}h \d{1,2}m \d{1,2}\.\d{3}s\)')

# Line: 2 Concurso B-MOVE (3m 53.708s -- 7m 6.829s)
REGEX1 = re.compile(r'\d{1,2} .* \((?P<time1>.*?) \-\- (?P<time2>.*?)\)')
SUBREGEX1 = re.compile(r'(?P<minutes>\d{1,2})m (?P<seconds>\d{1,2})\.(?P<milliseconds>\d{1,3})s')
SUBREGEX2 = re.compile(r'(?P<hours>\d{1,2})h (?P<minutes>\d{1,2})m (?P<seconds>\d{1,2})\.(?P<milliseconds>\d{1,3})s')

BEGINNING = datetime.timedelta(hours=0, minutes=0, seconds=0, milliseconds=0)


class LineParser(object):

    def __init__(self, line, *args, **kwargs):
        """
        """
        self.line = line
        self.regex = REGEX1
        self.subregex_list = [SUBREGEX1, SUBREGEX2]

    def get_output(self):
        """
        """
        match_obj = self.regex.match(self.line)
        if bool(match_obj):
            times_input = [match_obj.group('time1'), match_obj.group('time2')]
            times_output = list()
            for time in times_input:
                time_vector = [regex.match(time).groups() for regex in self.subregex_list if regex.match(time)].pop()
                time_output = None
                if len(time_vector) == 3:
                    time_vector = zip(('milliseconds', 'seconds', 'minutes'), time_vector[::-1])
                    time_dict = dict(time_vector)
                    minutes = int(time_dict.get('minutes'))
                    seconds = int(time_dict.get('seconds'))
                    milliseconds = int(time_dict.get('milliseconds'))
                    time_output = datetime.timedelta(minutes=minutes, seconds=seconds, milliseconds=milliseconds)
                elif len(time_vector) == 4:
                    time_vector = zip( ('milliseconds', 'seconds', 'minutes', 'hours'), time_vector[::-1] )
                    time_dict = dict(time_vector)
                    hours = int(time_dict.get('hours'))
                    minutes = int(time_dict.get('minutes'))
                    seconds = int(time_dict.get('seconds'))
                    milliseconds = int(time_dict.get('milliseconds'))
                    time_output = datetime.timedelta(hours=hours, minutes=minutes, seconds=seconds, milliseconds=milliseconds)
                else:
                    pass

                times_output.append(time_output)

            time_from = times_output[0]
            if time_from == BEGINNING:
                return self.line

            time_to = times_output[1]
            delta_time = time_to - time_from
            string = self.__timedelta_to_str(delta_time)
            index = self.line.rfind(')', 1)
            return self.line[0:index] + string + self.line[index:]
        else:
            return self.line

    def __timedelta_to_str(self, timedelta):

        d = dict()
        d["hours"], rem = divmod(timedelta.seconds, 3600)
        d["minutes"], d["seconds"] = divmod(rem, 60)
        d["milliseconds"] = int(timedelta.microseconds/1000)

        if d['hours'] > 0:
            return ", %(hours)sh %(minutes)sm %(seconds)s.%(milliseconds)ss" \
            % {'hours': d["hours"], 'minutes': d["minutes"], 'seconds': d["seconds"], 'milliseconds': d["milliseconds"] }
        else:
            return ", %(minutes)sm %(seconds)s.%(milliseconds)ss" \
            % {'hours': d["hours"], 'minutes': d["minutes"], 'seconds': d["seconds"], 'milliseconds': d["milliseconds"] }


class FileParser(object):
    """
    """

    def __init__(self, file_path, *args, **kwargs):

        self.file_path = file_path
        self.debug = kwargs.get('debug', False)


        return

    def run(self):
        """
        """
        # Open the file
        fd = file(self.file_path)
        lines = fd.readlines()

        # parsed_lines = [LineParser(line) for line in lines]
        # output_lines = [line.get_output() for line in parsed_lines]

        output_lines = [LineParser(line).get_output() for line in lines]

        if self.debug:
            print ""
            for output_line in output_lines:
                print(output_line)
        else:
            fd.close()
            with open(self.file_path, 'w') as fd:
                fd.writelines(output_lines)


def main():
    """
    """
###End main ###


if __name__ == "__main__":
    """
    """
    file_path = sys.argv[1]
    debug = (sys.argv[2] == 'debug')

    # file_path = r'H:\RetroEntreAmigos.com\01x00_episodio_piloto (2012-05)\REAM-01x00.txt'
    # debug = False
    # python G:\RetroEntreAmigos.com\extract_time_duration.py REAM-04x01.txt true

    fp = FileParser(file_path, debug=debug)
    fp.run()

#!/usr/bin/python
#-*- coding: utf-8 -*-

"""
Regular expression example
"""

import os
import sys
import time
import re

# log_example: 2020-05-29 14:05:32.425 MAIN     INFO    Application starts
REGEX_STR = r'(?P<Datetime>\d{4}-\d{2}-\d{2} \d{2}:\d{2}:\d{2}\.\d{3})\s{1,5}(?P<Logger>\w{2,6})\s{1,5}(?P<Level>\w{2,8})\s{1,5}(?P<msg>.*)'
REGEX = re.compile(REGEX_STR)

FILENAME_STR = "File_to_process_regex.txt"
LINES = [
    '2021-05-17 08:11:57.548 MAIN WARNING dalvikvm: Unable to resolve superclass of Lay; (790)',
    "2021-05-17 08:11:57.548 DUT  WARNING dalvikvm: Link of class 'Lay;' failed",
    '2021-05-17 08:11:57.548 MAIN DEBUG dalvikvm: DexOpt: unable to opt direct call 0x1e94 at 0x2c in Lf;.a',
    '2021-05-17 08:11:57.558 DUT  DEBUG dalvikvm: WAIT_FOR_CONCURRENT_GC blocked 0ms',
    'Hola, caracola',
    'Hello, world',
    'Orbis, te saluton!'
]

def main():
    """
    """
    filelines = []
    # with open(FILENAME_STR, 'r') as file_d:
        # filelines = file_d.readlines()
    filelines = LINES

    print(r'Regex pattern: %s\n' % REGEX_STR)
    for fileline in filelines:
        # Process the line with the regex
        match_obj = REGEX.match(fileline) # regex.match(fileline, options)
        if bool(match_obj) is True:
            print("Lines matches")
            print("%-20s %s " % ("group()/group(0):", match_obj.group()))
            print("%-20s %s" % ("The groups are:", str(match_obj.groups())))
            print("%-20s %s" % ("Group 'Datetime':", match_obj.group('Datetime')))
            print("%-20s %s" % ("Group 'Logger':", match_obj.group('Logger')))
            print("%-20s %s" % ("Group 'Level':", match_obj.group('Level')))
            print("%-20s %s" % ("Group 'msg':", match_obj.group('msg')))
        else:
            print("Line does not match")
            print(fileline)

        print("")

    return

def sub():
    """
    """
    phone = "2004-959-559 # This is Phone Number"

    print("Original phone number")
    print("Phone Num :  %s " % phone)

    # Delete Python-style comments
    num = re.sub(r'#.*$', "", phone)
    print "Phone Num : ", num

    # Remove anything other than digits
    num = re.sub(r'\D', "", phone)
    print "Phone Num : ", num


if __name__ == '__main__':
    main()

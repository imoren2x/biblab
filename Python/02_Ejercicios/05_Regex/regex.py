#!/usr/bin/python
#-*- coding: latin-1 -*-

"""
Regular expression examples
"""

import os
import sys
import time
import re

def main():
    regex_tuple_list = [
        ("(.*)(a)(.+)(i)(.*)", "Fui con Patri a la Dordogne."),
        ("(.*)(a)(.+)(i)(.*)", "Patri a la patti.", ),
        ("(.*)(a)(.+)(i)(.*)", "Fui con Patri a la Dordogne.Un lugar muy bello. A Patri le encanto el bosque verde.", ),
        (r'(.*?) are (.*?) .*', "Cats are smarter than dogs"),  # , re.M|re.I),
        ("http://.+\.net", "http://mundogeek.net"),
    ]

    print("Script BEGINS\n####\n")
    for regex_tuple in regex_tuple_list:
        regex_str = regex_tuple[0]
        regex_input = regex_tuple[1]
        match_options = regex_tuple[2] if len(regex_tuple) == 3 else None
        print("Regular Expression pattern: %s" % regex_str)
        print("Input pattern: %s" % regex_input)
        regex = re.compile(regex_str)
        match_obj = regex.match(regex_input, match_options) if match_options \
            else regex.match(regex_input)
        # match_obj = re.match(regex_str, regex_input, match_options) if match_options \
        #     else re.match(regex_str, regex_input)
        if not bool(match_obj):
            print("Input does not match regular expression")
            print("---------\n")
            continue

        print("Input matches regular expression")
        print("group()/group(0): %s " % match_obj.group())
        print "The start position is: %s" %(match_obj.start())
        print "The ending position is: %s" %(match_obj.end())
        print "The groups are: %s" %(str(match_obj.groups()))

        print("---------\n")


def sub():

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

#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
Programme that reads ConfigParser file and prints
through stdout.

http://docs.python.org/2/library/configparser.html
"""

import os
import ConfigParser

CONFIG_FILE = ".%s%s" % (os.sep, "cp_input.conf")


def main():
    """
    """
    cp = ConfigParser.ConfigParser()
    fileName = CONFIG_FILE

    # Read file
    cp.read(fileName)
    # Get sections of the Configuration File#
    sections = cp.sections()

    print("Sections in the Configuration File: %s" % sections)
    print("----")
    for section in sections:
        options = cp.options(section)
        print("Section: %s" % section)
        print("Options: %s " % options)
        has_section = cp.has_section(section)
        print("Has section? %s" % str(has_section))
        print("Get items")
        items = cp.items(section)
        print("Items: %s " % items)
        #
        print("--")
        for option in options:
            print("Section: %s" % section)
            print("Option: %s" % option )
            has_option = cp.has_option(section, option)
            print("Has option? %s" % str(has_option) )
            value = cp.get(section, option)
            print("Section/Option/Value: %(section)s/%(option)s/%(value)s" \
                % {'section': section, 'option': option, 'value': value})
            print("---")
        print("------")


if __name__ == "__main__":
    """
    """
    main()

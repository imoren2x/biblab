#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
"""

import os
import sys
import time
from optparse import OptionParser, OptionGroup


def main():
    """
    """
    if len( sys.argv[1:] ) == 0:
        msg  = " This script needs a configuration file to execute the rules.\n" + \
            "  Please, use the syntax: \n" + \
            "  $> python logDel.py -c \"<full file path>\""
        return msg

    parser = OptionParser(usage="%prog [-f] [-q]", version="%prog 1.0")

    parser.add_option("-c", "--conf", dest="confFile", \
        help="Configuration file to load",
        metavar="FILE")

    parser.add_option("-f", "--file", dest="filename",
        type="string", #type by default
        help="write report to FILE",
        metavar="FILE")

    # Store a constant value
    parser.add_option("-w", "--static", dest="static",
        action="store_const",
        help="Stores as constant")

    # Store True and False#
    parser.add_option("-v", "--verbose",
        action="store_true",
        default=False,
        dest="verbose")

    parser.add_option("-q", "--quiet",
        action="store_false",
        dest="verbose",
        default=True,
        help="don't print status messages to stdout")

    danger_group = OptionGroup(parser, "Dangerous Options",
        "Caution: use these options at your own risk.  "
        "It is believed that some of them bite.")
    danger_group.add_option("-g", action="store_true",
        help="Group option.")
    parser.add_option_group(danger_group)

    debug_group = OptionGroup(parser, "Debug Options")
    debug_group.add_option("-d", "--debug",
        action="store_true",
        help="Print debug information")
    debug_group.add_option("-s", "--sql",
        action="store_true",
        help="Print all SQL statements executed")

    debug_group.add_option("-e", action="store_true",
        help="Print every action done")

    parser.add_option_group(debug_group)

    (options, args) = parser.parse_args()

    if len(args) != 1:
        parser.error("incorrect number of arguments")

    print("options: %s \n" %( options ) )
    print("args: %s \n" %( args ) )

    print( "dest: %s " % options.confFile )


if __name__ == "__main__":
    """
    """
    sys.exit( main() )

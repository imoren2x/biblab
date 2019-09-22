#!/usr/bin/python
# -*- coding: latin-1 -*-
"""
"""

import os
import os.path
import sys
import time
import glob
import fnmatch
import re

#
CWD = os.getcwd()
PWD = os.path.abspath(os.path.join(CWD, r'.\..\ '))
print("Parent working directory: %s" % PWD)


def main_glob():
    """
    glob.glob(pattern)
    """
    print("\n glob.glob(pattern)")
    fileList = glob.glob(r'%s\*.*' % PWD)
    print("List of available files: %s" % fileList)
    print "--------\n"


def main_fnmatch():
    """
    fnmatch.fnmatch(pattern)
    """
    print("\n fnmatch.fnmatch(pattern)")
    for file_elem in os.listdir(PWD):
        if fnmatch.fnmatch(file_elem, '*.py'):
            print("File: %s" % file_elem)
    print "--------\n"


def main_filter():
    """
    fnmatch.filter(names, pattern)
    """
    print("\n fnmatch.filter(names, pattern)")
    names = os.listdir(PWD)
    pattern = r'.\[a-c]*.*'
    fileList = fnmatch.filter(names, pattern)
    print("File list: %s" % fileList)
    print "--------\n"


def main4():
  """
  """
  print("")
  print("main4")
  regex = fnmatch.translate('.\DatasetsRepo\\*.tcl')
  print regex
  reobj = re.compile(regex)
  print reobj.match('foobar.tcl')
  print "End of main4"
### End main4 ###


def main():
    """
    """
    main_glob()
    main_fnmatch()
    main_filter()
    # main4()


if __name__ == "__main__":
    """
    """
    sys.exit( main() )

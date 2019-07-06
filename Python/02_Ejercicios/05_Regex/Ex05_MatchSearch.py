#!/usr/bin/python
#-*- coding: latin-1 -*-

"""
Easy example of re.match object used
  as boolean.
"""

import os
import sys
import time
import re


if __name__ == "__main__":
    """
    """
    line = "Cats are smarter than dogs";

    matchObj = re.match( r'dogs', line, re.M|re.I)
    if matchObj:
        print "match --> matchObj.group() : ", matchObj.group()
    else:
        print "No match!!"
    #End IF#

    searchObj = re.search( r'dogs', line, re.M|re.I)

    if searchObj:
        print "search --> searchObj.group() : ", searchObj.group()
    else:
        print "Nothing found!!"
    #End IF#

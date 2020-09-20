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

    searchObj = re.search( r'(.*) are (.*?) .*', line, re.M|re.I)

    if searchObj:
        print "searchObj.group() : ", searchObj.group()
        print "searchObj.group(1) : ", searchObj.group(1)
        print "searchObj.group(2) : ", searchObj.group(2)
    else:
        print "Nothing found!!"
    #End IF#
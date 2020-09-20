#!/usr/bin/python
# -*- coding: latin-1 -*-

"""

"""


import os
import sys
import time
import math


if __name__ == "__main__":
    """
    """
    # Open a file
    fo = open("foo.txt", "r")
    print "Name of the file: ", fo.name
    print "Closed or not : ", fo.closed
    print "Opening mode : ", fo.mode
    print "Softspace flag : ", fo.softspace

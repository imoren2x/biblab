#!/usr/bin/python
#-*- coding: latin-1 -*-

"""
tell() returns current position

seek(offset[, from]) method changes the current file position.
    from = 0. The beginning of the file.
    from = 1. Current position
    from = 2. End of the file.
"""

import os
import sys
import time
import math


def main():
    """
    """
    # Open a file
    fo = open("foo.txt", "r+")
    str = fo.read(10);
    print "Read String is : ", str

    # Check current position
    position = fo.tell();
    print "Current file position : ", position

    # Reposition pointer at the beginning once again
    position = fo.seek(0, 0);
    str = fo.read(10);
    print "Again read String is : ", str
    # Close opend file
    fo.close()
### End main ###


if __name__ == "__main__":
    main()
### END main ###

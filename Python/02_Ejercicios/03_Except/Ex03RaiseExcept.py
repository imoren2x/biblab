#!/usr/bin/python
#-*- coding: latin-1 -*-

import os
import sys
import time

"""
"""


def functionName( level ):
    if level < 1:
        raise Exception("Invalid level! %s " % str(level) )
        # The code below to this would not be executed
        # if we raise the exception
    #End IF#
### End functionName ###


def main():
    """
    """
    try:
        functionName( -1 )
    except Exception, e:
        #
        print("Ha habido una exception.")
        print("Exception: %s " % str(e) )
    else:
        print("There has not been an exception.")
### END main ###

if __name__ == '__main__':
    main()
### END main ###

#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
"""

import os, sys, time, math

def numberSection():
    """
    """
    print("Part 1. Numbers:")
    print("----------------")
    print("Integer 10-base: x = 3")
    x = 3
    print("Type of x: type(x) = %s" %(type(x)))
    print("----------------")
    print("Integer long: x = 5L")
    x = 5L
    print("Type of x: type(x) = %s" %(type(x)))
    print("----------------")
    print("Integer octal: x = 023 (2*8 + 3 = 19)")
    x = 023
    print("Type of x: type(x) = %s" %(type(x)))
    print("----------------")
    print("Integer Hex: x = 0x17 (16 + 7 = 23)")
    x = 0x17
    print("Type of x: type(x) = %s" %(type(x)))
    print("----------------")
    print("Integer Float: x = 15.57")
    x = 15.57
    print("Type of x: type(x) = %s" %(type(x)))
    print("----------------")
    print("Complex numbers: x = 3 + 2j")
    x = 3 + 2j
    print("Type of x: type(x) = %s" %(type(x)))
    print("Abs(x) = %s" %(abs(x)))
    #print("angle(x) = %s" %(math.atan(x)/pi*360))

def boolSection():
    """
    """
    print("Part 2. Booleans:")
    print("----------------")
    print("Boolean: x = True")
    x = bool(True)
    print("Type of x: type(x) = %s" %(type(x)))

def strSection():
    """
    """
    print("Part 3. Strings:")
    print("----------------")
    s1 = "String one"
    print("String one: s1: %s" %(s1))
    s2 = "String two"
    print("String two: s2: %s" %(s2))
    print("Concatenate two strings: s = s1 + s2")
    print("  s = %s" %(s1 + s2))
    print("Right partition of string one")
    print("  s1.rpartition(\"n\") = (%s, %s, %s)" %( s1.rpartition("n")) )

def listSection():
    """
    """
    pass


if __name__ == "__main__":
    """
    """
    numberSection()
    boolSection()
    strSection()
    listSection()

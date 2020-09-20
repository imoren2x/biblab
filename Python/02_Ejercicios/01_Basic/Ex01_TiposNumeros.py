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


if __name__ == "__main__":
    """
    """
    numberSection()

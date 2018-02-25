#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
"""

import os, sys, time, math
	
def strSection():
	"""
	"""
	print("Part 3. Strings:")
	print("----------------")
	s1 = "String one"
	print("String one: s1: %s" %(s1))
	s2 = "String two"
	print("String two: s2: %s" %(s2))
	#Concatenate two strings
	print("Concatenate two strings: s = s1 + s2")
	print("  s = %s" %(s1 + s2))
	#Right partition of string one
	print("Right partition of string one")
	print("  s1.rpartition(\"n\") = (%s, %s, %s)" %( s1.rpartition("n")) )
	#Count of string variable
	print("Count of string characters.\n")
	print("%s \n" %( str(s1) ) )
	print("Count: %s \n" %( str( s1.count() ) ) )
	
##End strSection###

if __name__ == "__main__":
	"""
	"""
	strSection()

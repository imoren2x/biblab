#!/usr/bin/python
# -*- coding: iso-8859-1 -*-

"""
"""
#imports
import os, sys

def recurExample(list):
	if len(list) == 1:
		#print "list: %s" %(list[0])
		pass
	else:
		#print "list: %s" %(list[0])
		recurExample(list[1:len(list)])

if __name__ == "__main__":
	recurExample([1, 2, 3, 4, 5])

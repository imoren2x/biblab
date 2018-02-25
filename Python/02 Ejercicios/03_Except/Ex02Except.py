#!/usr/bin/python
#-*- coding: latin-1 -*-

import os
import sys
import time

"""
"""

def main():
	"""
	"""
	try:
	   fh = open("testfile", "r")
	   fh.write("This is my test file for exception handling!!")
	except IOError, e:
	   print "Error: can\'t find file or read data"
	   print "Exception: %s" % str(e)
	   raise IOError(e)
	else:
	   print "Written content in the file successfully"
	   fh.close()
	finally:
		print "Finally part written"

	print("After part written")
### END main ###

if __name__ == '__main__':
	main()

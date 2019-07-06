#!/usr/bin/python
#-*- coding: latin-1 -*-

import os
import sys
import time


class JustCounter:
	__secretCount = 0

	def count(self):
		self.__secretCount += 1
		print self.__secretCount
	### END count ###

### JustCounter ###

if __name__ == '__main__':
	counter = JustCounter()
	counter.count() # prints 1
	counter.count() # prints 2
	#
	try:
		print counter.__secretCount
	except AttributeError, e:
		print "Exception raised: You can't access to private attributes.\n"

	print("Accessing private attributes.")
	print("counter._JustCounter__secretCount")
	print counter._JustCounter__secretCount
### END ###

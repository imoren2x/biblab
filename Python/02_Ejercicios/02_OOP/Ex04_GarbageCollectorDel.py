#!/usr/bin/python
#-*- coding: latin-1 -*-

import os
import sys
import time


class Point:
	"""
	"""
	def __init__( self, x = 0, y = 0 ):
		self.x = x
		self.y = y
	# End __init__ #

	def __del__(self):
		class_name = self.__class__.__name__
		print class_name, "destroyed"
	# End __del__ #
### End Point ###


if __name__ == '__main__':
	pt1 = Point()
	pt2 = pt1
	pt3 = pt1
	print id(pt1), id(pt2), id(pt3) # prints the ids of the obejcts
	del pt1
	del pt2
	del pt3
### END main ###

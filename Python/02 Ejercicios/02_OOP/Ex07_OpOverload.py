#!/usr/bin/python
#-*- coding: latin-1 -*-

import os
import sys
import time


class Vector(object):
	"""
	Vector class.
	"""
	def __init__(self, a, b):
		self.a = a
		self.b = b
	# End __init__ #

	def __str__(self):
		return 'Vector (%d, %d)' % (self.a, self.b)
	# End __str__ #
	
	def __add__(self,other):
		"""
		Operator overload.
		"""
		return Vector(self.a + other.a, self.b + other.b)
	# End __add__ #
### END Vector ###


if __name__ == '__main__':
	"""
	"""
	v1 = Vector(2, 10)
	print "Vector v1 = %s" % str(v1)
	v2 = Vector(5, -2)
	print "Vector v2 = %s" % str(v2)
	
	print "Vector v3 =", v1 + v2
### END ###

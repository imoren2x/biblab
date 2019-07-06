#!/usr/bin/python
#-*- coding: latin-1 -*-

import os
import sys
import time


class Parent(object):
	"""
	Parent Class
	"""
	def myMethod(self):
		print 'Calling parent method'
	# End myMethod #
### END Parent ###

class Child(Parent):
	"""
	Child class
	"""

	def myMethod(self):
		print 'Calling child method'
	# End Child #

### END Child ###


if __name__ == '__main__':
	c = Child()		# instance of child
	c.myMethod()	# child calls overridden method
### END ###

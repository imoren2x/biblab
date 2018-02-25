#!/usr/bin/python
#-*- coding: latin-1 -*-

import os
import sys
import time

class Parent:
	"""
	Parent class.
	"""
	# define parent class
	parentAttr = 100
	
	def __init__(self):
		"""
		Constructor.
		"""
		print "Calling parent constructor"
	# End __init__ #

	def parentMethod(self):
		print 'Calling parent method'
	# End parentMethod #

	def setAttr(self, attr):
		Parent.parentAttr = attr

	def getAttr(self):
		print "Parent attribute :", Parent.parentAttr
### END Parent ###

class Child(Parent): # define child class
	"""
	"""
	def __init__(self):
		print "Calling child constructor"

	def childMethod(self):
		print 'Calling child method'
### END Child ###

if __name__ == '__main__':
	#
	c = Child()          # instance of child
	c.childMethod()      # child calls its method
	c.parentMethod()     # calls parent's method
	c.setAttr(200)       # again call parent's method
	c.getAttr()          # again call parent's method
	
	# d = Parent()
	# d.childMethod()      # child calls its method
	# d.parentMethod()     # calls parent's method
	# d.setAttr(200)       # again call parent's method
	# d.getAttr()          # again call parent's method
### END __name__ ###

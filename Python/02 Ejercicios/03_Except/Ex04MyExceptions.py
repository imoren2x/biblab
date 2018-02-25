#!/usr/bin/python
#-*- coding: latin-1 -*-

import os
import sys
import time

"""
NetworkError: Exception
NegativeException: Exception

raiseNetErr: Raise network error
raiseNegErr: Raise Negative Exception
"""

# Exception NetworkError inherits from RuntimeError
class NetworkError(RuntimeError):
	"""
	"""
	def __init__(self, arg):
		self.argumento = arg
	#END __init___#

	def __str__(self):
		#Call to father method#
		RuntimeError.__repr__(self)

		return str(self.argumento)
	#END __repr__#

### END NetworkError ###

# Exception NegativeException inherits from Exception
class NegativeException(Exception):
	"""
	"""
	def __init__(self, arg1, arg2):
		#Call to father method#
		Exception.__init__(self)
		#
		self.arg1 = arg1
		self.arg2 = int(arg2)
	#END __init__#

	def __str__(self):
		#Call to father method#
		Exception.__repr__(self)

		return "%s, %s" %( str(self.arg1), str(self.arg2) )
	#END __repr__#
### END NegativeException ###


def raiseNetErr():
	"""
	"""
	try:
		print("We are going to generate Network Error")
		raise NetworkError("Bad hostname")
	except NetworkError, e:
		print( "%s" % str(e.argumento) )
	finally:
		print("NetworkError generated.")
### END main ###


def raiseNegErr(arg):
	"""
	"""
	try:
		print("We are going to generate Negative Error")
		if arg < 0:
			raise NegativeException("Negative value", arg)
		else:
			pass
	except NegativeException, e:
		print( "%s" % str(e) )
	finally:
		print("Negative error generated.")
### END raiseNegErr ###


if __name__ == '__main__':
	raiseNetErr()

	print("")

	raiseNegErr(-1)
### END main ###

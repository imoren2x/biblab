#!/usr/bin/python
#-*- coding: latin-1 -*-

"""
"""

import os
import sys
import time
import math


def main():
	"""
	"""
	print("Creando directorio.")
	os.mkdir("newdir")
	os.chdir(".\newdir")
	os.getcwd()
	os.rmdir( "/tmp/test"  )
###End main###

if __name__ == "__main__":
	"""
	"""
	main()
###

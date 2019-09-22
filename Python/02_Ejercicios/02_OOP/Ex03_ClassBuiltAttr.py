#!/usr/bin/python
#-*- coding: latin-1 -*-

import os
import sys
import time


"""
Builtin class attributes
--------------------

	__dict__ : Dictionary containing the class's namespace.
	__doc__ : Class documentation string or None if undefined.
	__name__: Class name.
	__module__: Module name in which the class is defined. This attribute is "__main__" in interactive mode.
	__bases__ : A possibly empty tuple containing the base classes, in the order of their occurrence in the base class list.

"""


class Coche(object):
	"""
	Abstraccion de un objeto coche.
	"""
	anno = 1981 #Atributo de clase#

	def __init__(self, gasolina):
		"""
		Método constructor.
		"""
		#Atributos usando el objeto self.
		self.gasolina = gasolina
		#print "Tenemos", gasolina, "litros"
	# END __init__ #

	def arrancar(self):
		"""
		"""
		if self.gasolina > 0:
			print "Arranca"
		else:
			print "No arranca"
	#END arrancar#

	def conducir(self):
		"""
		"""

		if self.gasolina > 0:
			self.gasolina -= 1
			print "Quedan", self.gasolina, "litros"
		else:
			print "No se mueve"
		#End IF#

	#END conducir#
### END Coche ###

def main():
	"""
	"""
	#Coche con 50 l de gasolina.
	coche = Coche(50)

	#"""
	print("/////////////////////\n")
	print("Attribute __dict__")
	print("------------------")
	print("Printeo de atributo objeto coche.__dict__: ")
	print " ", coche.__dict__
	print("Printeo de dir(coche)")
	print " ", dir(coche)

	print(" ")
	print("Printeo de atributo de la clase Coche.__dict__: ")
	print " ", Coche.__dict__

	print("/////////////////////\n")
	print("Attribute __doc__")
	print("-------------")
	print("Printeo de atributo objeto coche.__doc__: ")
	print " ", coche.__doc__

	print(" ")
	print("Printeo de atributo de la clase Coche.__doc__: ")
	print " ", Coche.__doc__

	print("/////////////////////\n")

	print("Attribute __name__")
	print("-------------")

	# print("Printeo de atributo objeto coche.__name__: ")
	# print coche.__name__
	print(" ")
	print("Printeo de atributo de la clase Coche.__name__: ")
	print " ", Coche.__name__

	#"""
	print("/////////////////////\n")
	print("Attribute __module__")
	print("-------------")
	print("Printeo de atributo objeto coche.__module__: ")
	print " ", coche.__module__

	print(" ")
	print("Printeo de atributo de la clase Coche.__module__: ")
	print " ", Coche.__module__

	print("/////////////////////\n")
	print("Attribute __bases__")
	print("-------------")
	# print("Printeo de atributo objeto coche.__bases__: ")
	# print " ", coche.__bases__

	print(" ")
	print("Printeo de atributo de la clase Coche.__bases__: ")
	print " ", Coche.__bases__
	print("-------------")
### END main ###

if __name__ == '__main__':
	#
	main()
### END main ###

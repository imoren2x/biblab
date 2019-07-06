#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
 La función reduce aplica una función a pares de elementos 
de una secuencia hasta dejarla en un solo valor.

 A continuación podemos ver un ejemplo en el que se utiliza
reduce para sumar todos los elementos de una lista.
"""

def sumar(x, y):
	"""
	Funcion que suma dos elementos.
	"""
	print (x+y)
	return x + y


if __name__ == "__main__":
	print "Funcion suma"
	l = [1, 2, 3, 4, 5, 6]
	print "Entrada: ", l
	l2 = reduce(sumar, l)
	print "Salida:  ", l2

#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
 La comprensión de listas es una construcción que permite crear listas
a partir de otras listas. 

 Cada una de estas construcciones consta de una expresión que determina 
cómo modificar el elemento de la lista original, seguida de una o 
varias clausulas for y opcionalmente una o varias clausulas if.
"""

if __name__ == "__main__":
	print "Funcion map pasando al cuadrado"
	l = [1, 2, 3, 4, 5, 6]
	print "Entrada: ", l
	l2 = [n ** 2 for n in l]
	print "Salida:  ", l2
	#l3 = [for n in l n ** 2 ] #NO VALIDO#

	print "Funcion filter si no es par"
	print "Entrada: ", l
	l2 = [n for n in l if n % 2.0 == 0]
	print "Salida:  ", l2

	l = [0, 1, 2, 3]
	m = ["a", "b"]
	print "Entrada: m = ", m
	print "Entrada: l = ", l
	n = [s * v for s in m \
			for v in l if v > 0]
	print "Salida:  ", n

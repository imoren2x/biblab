#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
 El operador lambda sirve para crear funciones anónimas en 
línea. Al ser funciones anónimas, es decir, sin nombre, 
estas no podrán ser referenciadas más tarde.

 Las funciones lambda se construyen mediante el operador
lambda, los parámetros de la función separados por comas 
(atención, SIN paréntesis), dos puntos (:) y el código 
de la función.
"""

if __name__ == "__main__":
	print "Funcion filter si es par"
	l = [1, 2, 3, 4, 5, 6]
	print "Entrada: ", l
	l2 = filter(lambda n: n % 2.0 == 0, l)
	print "Salida:  ", l2

	print "Funcion suma"
	l = [1, 2, 3, 4, 5, 6]
	print "Entrada: ", l
	l2 = reduce(lambda x, y: x + y, l)
	print "Salida:  ", l2

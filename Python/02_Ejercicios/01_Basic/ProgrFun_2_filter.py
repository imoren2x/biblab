#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
 La función filter verifica que los elementos de una secuencia
cumplan una determinada condición, devolviendo una secuencia
con los elementos que cumplen esa condición.

 Es decir, para cada elemento de sequence se aplica la
función function; si el resultado es True se añade a la lista
y en caso contrario se descarta.
"""


def true_si_es_par(n):
	"""
	Funcion que devuelve un booleano.
	Condicion necesaria para la funcion filter.
	"""
	return (n % 2.0 == 0)


if __name__ == "__main__":
	print "Funcion true_si_es_par"
	l = [1, 2, 3, 4, 5, 6]
	print "Entrada: ", l
	l2 = filter(true_si_es_par, l)
	print "Salida:  ", l2

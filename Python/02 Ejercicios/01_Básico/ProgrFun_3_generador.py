#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
 Las expresiones generadoras funcionan de forma muy similar a la
comprensión de listas.
 Su sintaxis es igual pero usan parentesis en lugar de corchetes.
 Lo que devuelven son una funcion generadora.
 
 El generador se puede utilizar en cualquier lugar donde se necesite un
objeto iterable. Por ejemplo en un for in
"""

def mi_generador(n, m, s):
	while n <= m:
		yield n
		n += s

if __name__ == "__main__":
	print "Funcion generador al cuadrado"
	l = [1, 2, 3, 4, 5, 6]
	print "Entrada: ", l
	l2 = (n ** 2 for n in l)
	print "Salida:  ", l2
	#l3 = [for n in l n ** 2 ] #NO VALIDO#
	
	print "Usando la funcion generador"
	for n in mi_generador(0, 5, 1):
		print n

	"""
	Como no estamos creando una lista completa en memoria, sino 
	generando un solo valor cada vez que se necesita, en 
	situaciones en las que no sea necesario tener la lista 
	completa el uso de generadores puede suponer una gran 
	diferencia de memoria. En todo caso siempre es posible 
	crear una lista a partir de un generador mediante la función
	list
	"""

	#lista = list(mi_generador)
	#print lista

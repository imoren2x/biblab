#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
 Un decorador no es es más que una función 
 que recibe una función como parámetro y 
 devuelve otra función como resultado.
"""

def mi_decorador(funcion):
	def nueva(*args):
		print "Llamada a la funcion", funcion.__name__
		retorno = funcion(*args)
		return retorno

	return nueva

@mi_decorador
def imp(s):
	print s

if __name__ == "__main__":
	imp("hola")

	imp2("hola")

	"""
	Si quisiéramos aplicar más de un decorador bastaría 
	añadir una nueva línea con el nuevo decorador.
		@otro_decorador
		@mi_decorador
		def imp(s):
			print s

	Es importante advertir que los decoradores se ejecutarán de abajo a
	arriba. Es decir, en este ejemplo primero se ejecutaría
	mi_decorador y después otro_decorador.
	"""

"""
Referencias: 
 Clases decoradoras: http://rooteando.com/decoradores-en-python
 Mas ejemplos: http://www.juanjoconti.com.ar/2008/07/11/decoradores-en-python-i/
 Decoradores con parametros: http://www.juanjoconti.com.ar/2009/07/16/decoradores-en-python-ii/
"""

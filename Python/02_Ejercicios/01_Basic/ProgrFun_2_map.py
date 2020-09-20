#!/usr/bin/python

"""
 La función map aplica una función a cada elemento de una secuencia y
devuelve una lista con el resultado de aplicar la función a cada elemento.

 Si se pasan como parámetros n secuencias, la función tendrá que aceptar n
argumentos.
 Si alguna de las secuencias es más pequeña que las demás,
el valor que le llega a la función function para posiciones mayores que
el tamaño de dicha secuencia será None.
"""

def cuadrado(n):
    return n ** 2

def producto(n1, n2):
    return n1 * n2

if __name__ == "__main__":
    print "Funcion cuadrado"
    l = [1, 2, 3]
    print "Entrada: ", l
    l2 = map(cuadrado, l)
    print "Salida:  ", l2

    print ""
    print "Funcion producto"
    l11 = [1, 2, 3]
    l12 = [2, 3, 4]
    print "Entrada: ", l11
    print "Entrada: ", l12
    f = producto #puntero a funcion
    lo2 = map(f,l11, l12)
    print "Salida:  ", lo2

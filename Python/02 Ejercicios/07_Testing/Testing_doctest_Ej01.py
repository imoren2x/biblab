#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
@title Testing.py Ejemplo sencillo de doctest.

"""

import sys
import os
import doctest


def cuadrados(lista):
    """Calcula el cuadrado de los numeros de una lista
    >>> l = [0, 1, 2, 3]
    >>> cuadrados(l)
    [0, 1, 4, 9]
    """
    return [n ** 2 for n in lista]


def cuadradosMal(lista):
    """Calcula el cuadrado de los numeros de una lista
    >>> l = [0, 1, 2, 3]
    >>> cuadrados(l)
    [0, 1, 4, 9]
    """
    return [n * 2 for n in lista]


def _test():
	doctest.testmod() 	#name = (módulo a probar), por defecto actual
						#verbose = True


if __name__ == "__main__":
    _test()

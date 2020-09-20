#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
"""

import os
import sys
import time
import math


if __name__ == "__main__":
    """
    """
    print("Abrir un fichero en modo escritura.")
    f = open("Ex01FileWrite.txt", "w")
    print("Escribiendo hola mundo.")
    f.write ("Hola, mundo\n")
    print("Escribiendo Orbis, te saluto.")
    f.write ("Orbis, te saluto\n")
    f.close()

    print(" ")
    print("Abrir un fichero en modo lectura.")
    f = open("Ex01FileWrite.txt", "r")
    obj = f.read()
    print "Obj: " + obj
    print "Type(obj): " + str(type(obj))
    f.close()

    #Readlines devuelve una lista con las lineas#
    f = open("Ex01FileWrite.txt", "r")
    list = f.readlines()
    print "List: " + str(list)
    print "Type(list): " + str(type(list))
    f.close()

#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
"""

import os
import sys
import time
import math


def main():
    """
    """
    fileStr = "Ex03FileReadExcept.txt"
    try:
        print("Abrir un fichero en modo lectura.")
        f = open ( fileStr, "r" )
    except IOError, e:
        print("Exception: %s " % str(e) )
        print("Abrir un fichero en modo escritura.")
        f = open ( fileStr, "w" )
    #End try#

    if f.mode == "w":
        print("Escribiendo hola mundo.")
        f.write ("Hola, mundo\n")
        print("Escribiendo Orbis, te saluto.")
        f.write ("Orbis, te saluto\n")
    elif f.mode == "r":
        print("Leyendo el fichero.")
        f = open ( fileStr, "r" )
        l = f.readlines()
        print("Lineas: %s " % str(l) )
    #End IF#

    print("Cerrando el fichero.")
    f.close()

    return
###End main###


if __name__ == "__main__":
    """
    """
    main()
###

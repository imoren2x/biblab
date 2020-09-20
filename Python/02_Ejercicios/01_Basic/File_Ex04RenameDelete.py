#!/usr/bin/python
#-*- coding: latin-1 -*-

"""
"""

import os
import sys
import time
import math


def main():
    """
    """
    #Crear fichero#
    print("Crear fichero.")
    fileStr = "Ex05RenameDelete.1.txt"
    try:
        fo = open( fileStr, "w" )
        fo.write("Texto de ejemplo.")
        fo.close()
    except IOError, e:
        print( "Exception: %s " % str(e) )
        return
    #
    print( "Fichero creado." )

    #Renombrar fichero
    print( "Renombrar fichero" )
    newFileStr = "Ex05RenameDelete.2.txt"
    os.rename(fileStr, newFileStr)
    print( "Fichero renombrado" )

    #Borrar fichero#
    print( "Borrar fichero" )
    os.remove(newFileStr)
    #
    return
###End main###


if __name__ == "__main__":
    """
    """
    main()
###

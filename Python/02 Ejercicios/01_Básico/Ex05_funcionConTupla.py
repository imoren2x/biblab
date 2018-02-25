#!/usr/bin/python
# -*- coding: latin-1 -*-

import os, sys

def f1(par1 = 2, par2 = 3, *pars ):
    print("Lontidud de argumento variable: %i" %(len(pars)))
    #print("pars: %t" %(pars)) #No funciona#
    """
    #No funciona#
    if len(pars) == 1:
        temp = int(pars[0]) + int(pars[1])
    """
    subsuma = 0

    print("Longitud de var arg: %i" %(len(pars) ) )
    print("Argumento var arg: %s " %( str(pars) ))
    print("Tipo del var arg: %s" %( str(type( pars )) ) )

    #Parseo del argumento pars para acceder a la tupla.
    elemento = None
    for e in pars:
      elemento = e
    #Elemento es una tupla correctamente parseada.
    if elemento != None:
      print("Longitud de elemento: %i" %(len(elemento) ) )
      print("Argumento de elemento: %s " %( str(elemento) ))
      print("Tipo del elemento: %s" %( str(type(elemento)) ) )
      for elem in elemento:
        print("Argumento de elemento: %s " %( str(elem) ))
        print("Tipo del elemento: %s" %( str(type(elem)) ) )

    return par1 + par2

def f2(par1 = 2, par2 = 3, *pars ):
    print("Lontidud de pars: %i" %(len(pars)))
    print("Tipo de pars: " + str(type(pars)))
    print("Pars: " + str(pars))
    return par1 + par2 + sum(pars)


if __name__ == '__main__':
    print("Llamada 1: f1() = %i" %(f1()))
    print("---")
    print("Llamada 2: f1(3, 4) = %i" %(f1(3, 4)))
    print("---")
    t1 = tuple( (1, 2) )
    print("Llamada 3: f1(3, 4, %s) = %i" %( t1, f1(3, 4, t1 ) ))
    print("---")
    t2 = tuple( (12, 15, 16, 19) )
    print("Llamada 4: f1(3, 4, %s) =  %i" %( t2, f1(3, 4, t2 )))
    print("---")
    print("Llamada 5: f2(3, 4, 5, 6) = %i" %(f2(3, 4, 5, 6)))

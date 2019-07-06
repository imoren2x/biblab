#!/usr/bin/python
# -*- coding: latin-1 -*-

def f1(par1 = 2, par2 = 3, **pars ):
    print("Numero de argumentos variables: %i" %( len(pars) ) )
    print("Tipo de argumentos variables: %s " %( str( type(pars) ) ))
    print("Argumentos variables: %s " %( str(pars) ))

    print("Primer argumento: %s." %( str(par1) ) )
    print("Segundo argumento: %s." %( str(par2) ) )

    return par1 + par2 + sum(list(pars.values()))


if __name__ == "__main__":
    print("----------")
    print("El resultado por defecto es %i" %(f1()))
    print("----------")
    print("El resultado con parÃ¡tros es %i" %(f1(3, 4))
    print("----------")
    print("El resultado con parÃ¡tros y tupla es %i" %(f1(3, 4, par3 = 5, par4 = 6))
    print("----------")
    """
    #De esta forma NO se puede hacer.
    pard = { 'par6': 1, 'par5': 2, 'par3': 5, 'par4': 6 }
    print("El resultado con parÃ¡tros y tupla es %i" %( f1(3, 4, pard) )
    print("----------")
    """

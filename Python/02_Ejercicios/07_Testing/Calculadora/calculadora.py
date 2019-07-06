#-------------------------------------------------------------------------------
# Name:        Calculadora
# Purpose:
#
# Author:      pbp
#
# Created:     19/09/2013
# Copyright:   (c) pbp 2013
# Licence:     <your licence>
#-------------------------------------------------------------------------------


class Calculadora(object):
    def __init__(self, mem=0):
        self.mem = mem
        self.res = None
        self.poly = None

    def suma(self, op1, op2):
        self.res = op1 + op2

    def resta(self, minus, subs):
        self.res = minus - subs

    def producto(self, op1, op2):
        self.res = op1 * op2

    def div(self, dividend, divisor):
        self.res = dividend / divisor

    def divmodo(self, dividend, divisor):
        #self.res = divmod[1]
        self.res = dividend % divisor

    def cuadrado(self, base):
        self.res = base * base

    def cubo(self, base):
        self.res = base * base * base

    def potencia(self, base, exponente):
        self.res = 1
        for indice in range(1, exponente + 1):
            self.res *= base

    def getMem(self):
        return self.mem

    def setMem(self, mem):
        self.mem = mem

    def getRes(self):
        return self.res


if __name__ == "__main__":
    pass

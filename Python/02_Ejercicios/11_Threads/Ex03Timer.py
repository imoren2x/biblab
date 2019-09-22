#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
Clase Timer:
    Hereda de Thread y ejecuta el código de su método run después de un periodo de tiempo indicado como parámetro en su constructor.
    También incluye un método cancel mediante el que cancelar la ejecución antes de que termine el periodo de espera.
"""

import time
from threading import Timer


def hello():
    print "hello, world"
###END hello###


def imprime(num):
    print "Soy el hilo", num
    time.sleep(1)
###END imprime###

if __name__ == "__main__":
    """
    """
    print "Soy el hilo principal"

    t1 = time.clock()
    print "Ejecucion de hello world."
    t = Timer(5.0, hello)
    t.start() # after 30 seconds, "hello, world" will be printed
    print "Ejecutado y lanzado el hello world."
    t.join()

    t2 = time.clock()

    t3 = t2 - t1
    print("Tiempo consumido: %s segundos \n" % str(t3) )

"""
Métodos interesantes:
    .setDaemon devuelve un booleano si se trata de un demonio.
"""

"""
Ref:

http://mundogeek.net/archivos/2008/04/18/threads-en-python/#more-1462

http://docs.python.org/2/library/threading.html
"""

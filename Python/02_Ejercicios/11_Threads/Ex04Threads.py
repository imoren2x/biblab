#!/usr/bin/python
# -*- coding: latin-1 -*-

import time
import threading

def imprimir_mensaje(msj):
    for i in range(0,10):
        print(msj)
        time.sleep(1)

def main():
    x = raw_input("Estoy esperando que presiones enter...")
    print "Termino la funcion main"
    time.sleep(1)


if __name__ == "__main__":
    """
    """
    s = "Soy el thread"
    thread = threading.Thread(target=imprimir_mensaje, args = (s, ))
    thread.start()
    
    main()

"""
Ref:

http://mundogeek.net/archivos/2008/04/18/threads-en-python/#more-1462

http://docs.python.org/2/library/threading.html
"""

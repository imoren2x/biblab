#!/usr/bin/python
# -*- coding: latin-1 -*-


"""
Modelo productor-consumidor donde no puede haber deadlock
porque siempre se libera el lock después de lista.pop()
"""

import threading


lista = []

lock = threading.Lock()

def anyadir(obj):
    # Aquirir el lock
    #  arg True: espera a que se libere
    #  arg False: no espera a que se libere
    adquirido = lock.acquire()
    if adquirido:
        print "[anyadir] Apendando un elemento."
        lista.append(obj)
    #liberar el lock
    lock.release()
### End anyadir ###


def obtener():
    if lock.acquire():
        try:
            obj = lista.pop()
        except:
            print "[obtener] No hay ningun elemento."
            obj = -1
    #End IF#
    lock.release()

    return obj
### End obtener ###


def threadAnyadir():
    for i in range(0, 5):
        print "[threadAnyadir] Obj: %d" %(i)
        anyadir(i)

def threadObtener():
    for i in range(0, 5):
        print "[threadObtener] Obj: %d" %(i)
        obtener()


if __name__ == "__main__":
    """
    """
    t = threading.Thread(target=threadAnyadir, args=())
    t.start()

    t = threading.Thread(target=threadObtener, args=())
    t.start()

"""
Ref:
http://mundogeek.net/archivos/2008/04/18/threads-en-python/#more-1462

http://docs.python.org/2/library/threading.html
"""

#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
Modelo productor-consumidor donde sí puede haber deadlock
porque no se libere el lock después de lista.pop()
"""

import threading


lista = []

lock = threading.Lock()

def anyadir(obj):
    #aquirir el lock
    #  arg True: espera a que se libere
    #  arg False: no espera a que se libere
    adquirido = lock.acquire()
    if adquirido:
        lista.append(obj)
    #liberar el lock
    lock.release()

def obtener():
    lock.acquire()
    obj = lista.pop()
    lock.release()
    return obj

def threadAnyadir():
    for i in range(0, 5):
        print "[threadAnyadir] Obj: %d" %(i)
        anyadir(i)

def threadObtener():
    for i in range(0, 5):
        print "[threadObtener] Obj: %d" %(i)
        try:
            #PUEDE HABER DEADLOCK
            # SI lista.pop() no se ejecuta, no se llega a
            #  a liberar el lock, luego al re-entrar, se
            #  produce un deadlock
            obtener()
        except:
            print "[threadObtener] No hay ningun elemento."


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

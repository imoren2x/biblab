#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
Modelo productor-consumidor donde no puede haber deadlock
porque siempre se libera el lock después de lista.pop()

La clase RLock funciona de forma similar a Lock, pero en este caso el candado puede ser adquirido por el mismo thread varias veces, y no quedará liberado hasta que el thread llame a release tantas veces como llamó a acquire.
Como en Lock, y como en todas las primitivas de sincronización que veremos a continuación, es posible indicar a acquire si queremos que se bloquee o no.

"""

import os
import sys
import threading
from time import time, sleep
from random import seed, uniform


lista = list([])

lock = threading.RLock()

def produce(obj):

    if lock.acquire():
        try:
            print "[produce] Apendando el elemento %s" % str(obj)
            lista.append(obj)
        finally:
            lock.release()
    #End IF#    
    print("[produce] End")
    return
### END produce ###

def consume():
    """
    """
    result = None

    if lock.acquire():
        try:
            obj = lista.pop()
            print "[consume] consumido el elemento %s" % str(obj)            
            result = obj
        except Exception, e:
            print "[consume] There has been an exception."
            print e
            #raise Exception
            print "[consume] consumido el elemento -1"
            result = -1
        finally:
            lock.release()
            print("[consume] End")
            return result
    #End IF#
### END consume ###

MIN = 0.0
MED = 0.5
MAX = 1.0


def thread(numIter, name):
    """
    Function which randomly produces or consumes data.
    """
    th_str = "thread %s" % str(name)

    for ite in range(0, numIter):
        print "[%s] Iteration: %s \n" % (str(th_str), str(ite))

        value = uniform(MIN, MAX)
        print "[%s] value: %s" % (str(th_str), str(value))

        if value > MED:
            print("[%s] Value to produce: %s" % (th_str, str(value)) )
            produce(value)
            print("[%s] Value produced." % th_str)
        else:
            print("[%s] Value to consume" % th_str)
            obj = consume()
            print("[%s] Value consumed: %s" % (th_str, str(obj)) )
        #End IF#

        print("[%s] El proceso duerme durante %s segundos." % (th_str, str(value*10)) )
        sleep(value*10)
        print(" ")
    #End FOR#

    print("[%s] End" % th_str)
    return
### End thread ###


if __name__ == '__main__':
    NUM = 5
    seed(time())
    t1 = threading.Thread(target=thread, args=(NUM, "1") )
    t1.start()

    t2 = threading.Thread(target=thread, args=(NUM, "2") )
    t2.start()

"""
Ref:
http://mundogeek.net/archivos/2008/04/18/threads-en-python/#more-1462

http://docs.python.org/2/library/threading.html
"""

#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
Modelo productor-consumidor con conditional variables
porque siempre se libera el lock después de lista.pop()
"""

import threading
from time import time, sleep, clock
from random import seed, uniform

lista = list([])
cond = threading.Condition()


def consume():
    """
    """
    print("[consume] acquiring the condition.")
    cond.acquire()
    print("[consume] condition acquired.")
    timer1 = clock()
    print("[consume] condition waiting.")
    cond.wait(15.0)
    print("[consume] finish waiting.")
    timer2 = clock()
    eTime = timer2 - timer1
    print( "[consume] Time elapsed: %s " % str(eTime) )
    print( "[consume] Extract element " )
    try:
        obj = lista.pop()
    except IndexError, e:
        print e
        obj = -1
    print( "[consume] Extracted element: %s " % str(obj) )
    print( "[consume] Releasing Condition. " )
    cond.release()
    print( "[consume] Condition released. " )

    print( "[consume] End \n" )
    return obj
### END consume ###

def produce(obj):
    """
    """
    print("[produce] acquiring the condition.")
    cond.acquire()
    print("[produce] condition acquired.")
    print("[produce] Appeding object: %s" % str(obj) )
    lista.append(obj)
    print("[produce] Object appended." )

    print("[produce] Notifying condition." )
    cond.notify()
    print("[produce] Condition notified." )

    print("[produce] Releasing condition.")
    cond.release()
    print("[produce] Condition released.")

    print("[produce] End.")
    return
### End produce ###

def threadProducir():
    for i in range(0, 10):
    #i = 1
    #while True:
        print "[threadProducir] Iteration: %d" %(i)
        print "[threadProducir] producir: %d" %(i)
        produce(i)
        #i = i + 1

def threadConsumir():
    for i in range(0, 5):
        print "[threadConsumir] Iteration: %d" %(i)
        print "[threadConsumir] Obj: %d" %(consume())
### End threadConsumir ###

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

if __name__ == "__main__":
    """
    """
    # t = threading.Thread(target=threadProducir, args=())
    # t.start()

    # t = threading.Thread(target=threadConsumir, args=())
    # t.start()

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

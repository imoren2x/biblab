#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
Modelo productor-consumidor con conditional variables
porque siempre se libera el lock después de lista.pop()
"""

import threading
from time import time, sleep, clock
from random import seed, uniform

# Global variables #
lista 	= list([])
evento 	= threading.Event()
ITERMAX = 5
UNIMAX 	= 1
##################

def consume():
    """
    """
    print("[consume] Waiting...")
    t1 = clock()
    evento.wait(15.0)
    t2 = clock()
    print("[consume] Time elapsed: %s " % str(t2 - t1) )
    if len(lista) > 0:
        result = lista.pop()
    else:
        print("[consume] Aucun valeur a retourner.")
    return
    #End IF#

    print("[consume] value consumed: %s" % str(result) )
    print("[consume] lista: %s" % str(lista) )
    print("[consume] End")
    return result
### END consume ###

def produce():
    """
    """
    print("[produce] getting uniform value")
    value = uniform(0, UNIMAX)
    print("[produce] value: %s " % str(value))

    print("[produce] Appending value to the list.")
    lista.append(value)
    print("[produce] Value appended.")
    print("[produce] list: %s " % str(lista) )
    print("[produce] Notifying.")
    evento.set()
    print("[produce] Threads Notified.")
### END produce ###

def thread(type):
    """
    type can be "producer" or "consumer".
    """
    print("[thread %s] Begin" % str(type))
    for i in range(0, ITERMAX):
        print("[thread %s] Iteration: %s" % (str(type), i) )
        if (type == "producer"):
            produce()
        elif (type == "consumer"):
        consume()
    #End FOR#

### End thread ###

def main():
    """
    """
    seed(time())

    t1 = threading.Thread(target = thread, name = "Producer", args = ("producer", ))
    t1.start()

    t2 = threading.Thread(target = thread, name = "Consumer", args = ("consumer", ))
    t2.start()
### End main ###

if __name__ == '__main__':
    main()

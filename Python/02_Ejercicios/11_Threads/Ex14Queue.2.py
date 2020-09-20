#!/usr/bin/python
# -*- coding: latin-1 -*-

#Import modules#
import threading
from Queue import Queue
from time import time, sleep, clock
from random import seed, uniform

#Global variables#
q = Queue()
ITERMAX = 5
UNIMAX  = 1
kTIMEOUT = 15.0 #15.0 seconds

def consume():
    """
    """
    result = q.get( block = True, timeout = kTIMEOUT )

    print("[consume] value consumed: %s" % str(result) )
    print("[consume] End")
    return result
### End consume ###

def produce():
    """
    """
    print("[produce] getting uniform value")
    value = uniform(0, UNIMAX)
    print("[produce] value: %s " % str(value))

    print("[produce] Appending value to the list.")
    q.put( item = value, block = True, timeout = kTIMEOUT )
    print("[produce] Value appended.")
    print("[produce] Size of the queue: %s " % str(q.qsize()) )
### End produce ###

def thread(type):
    """
    type can be "producer" or "consumer".
    """
    print("[thread %s] Begin" % str(type))
    for i in range(0, ITERMAX):
        print("[thread %s] Iteration: %s" % (str(type), i) )
        if (type == "producer"):
            t1 = clock()
            produce()
            print("[thread/produce] Time elapsed: %s " % str(clock() - t1) )
        elif (type == "consumer"):
            t1 = clock()
            consume()
        print("[thread/consume] Time elapsed: %s " % str(clock() - t1) )
    #End FOR#

### End thread ###

if __name__ == "__main__":
    """
    """
    seed(time())

    t1 = threading.Thread(target = thread, name = "Producer", args = ("producer", ))
    t1.start()

    t2 = threading.Thread(target = thread, name = "Consumer", args = ("consumer", ))
    t2.start()

"""
Ref:

http://mundogeek.net/archivos/2008/04/18/threads-en-python/#more-1462

http://docs.python.org/2/library/threading.html
"""

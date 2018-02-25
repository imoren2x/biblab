#!/usr/bin/python
# -*- coding: latin-1 -*-


"""
Threding Example: two non-sync'ed threads.
    First one: Counts from 0 to maxnum - 1.
    Second one: Checks the state of the first thread.
"""

import os
import sys
import time

from random import uniform, seed
import threading
from math import ceil

MIN = 0.0
MAX = 1.0

def thread1(maxnum):
    """
    First Thread: Counts from 0 to maxnum - 1.    
    Between counting, it randomly sleeps for some time.
    """
    #Initialize seed of the random event
    seed( time.time() / ceil(time.time()) )

    for tick in range(0, maxnum):
        #Take value to wait
        sleepTime = uniform(MIN, MAX)
        sleepTime *= 10
        #
        print("th1: Sleep for: %s seconds." % str(sleepTime) )
        time.sleep(sleepTime)
        print("th1: No: %s \n" % str(tick) )
    #End FOR#

    print("th1: End of thread 1.")
    return
#End thread1#


def thread2(thread):
    """
    Second thread: Checks the state of the first thread.
    """
    isAlive = True

    while isAlive:
        RandSleepTime = uniform(MIN, MAX)
        RandSleepTime *= 10
        #
        print(" ")
        print("th2: Sleep for: %s seconds." % str(RandSleepTime) )        
        time.sleep(RandSleepTime)
        
        try:
            isAlive = thread.isAlive()            
            if isAlive:
                print("th2: The thread is alive.\n")
            else:
                print("th2: The thread is NOT alive.\n")

            th_name = thread.name
            print("------------------")
            print("th2: The name of the thread is: " + th_name + " \n" )
            # print("The name of the thread is: %s \n"  % repr(unichr(th_name)) )
            #threading.enumerate lista de objetos threads que se están ejecutando.
            print("th2: Threads: %s" %(threading.enumerate()) )
            #threading.activeCount consultar el número de threads ejecutándose.
            print("th2: Numero de threads: %s" %(threading.activeCount()) )
            print("------------------")
        #End try#    
        except Exception, e:
            print("th2: There has been an exception.")
            print("th2: Exception: %s" % e)
    #End while#
    print("th2: End of thread2")
    return
### End thread2 ###


if __name__ == '__main__':
    #
    maxnum = 16
    
    print("Inicio del primer thread.")
    t1 = threading.Thread(target=thread1, args=(maxnum, ), name = "Thread 1")
    print("Arranque.")
    t1.start()
    
    print("Inicio del segundo thread.")
    t2 = threading.Thread(target=thread2, args=(t1, ), name = "Thread 2")
    print("Arranque.")
    t2.start()

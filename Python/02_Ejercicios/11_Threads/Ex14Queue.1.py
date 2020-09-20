#!/usr/bin/python
# -*- coding: latin-1 -*-


import threading
import Queue


q = Queue.Queue()

class MiThread(threading.Thread):
    def __init__(self, q):
        self.q = q
        threading.Thread.__init__(self)

    def run(self):
        while True:
            try:
                obj = q.get(False)
            except Queue.Empty:
                print "Fin"
                break
            #End try#
            print obj
        #End while#
    #End run#
### End MiThread ###


if __name__ == "__main__":
    """
    """
    for i in range(10):
        q.put(i)

    t = MiThread(q)
    t.start()
    t.join()

"""
Ref:
http://mundogeek.net/archivos/2008/04/18/threads-en-python/#more-1462

http://docs.python.org/2/library/threading.html
"""

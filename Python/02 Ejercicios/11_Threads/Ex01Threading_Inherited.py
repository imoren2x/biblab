#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
"""

import os
import sys
import time
import threading
from datetime import datetime


class MiThread(threading.Thread):
    def __init__(self, num):
        threading.Thread.__init__(self)
        self.num = num
    #End __init__#
    
    def run(self):
        print "%s : Nazco: Soy el hilo %s"  %(datetime.now(), self.num)
        print "%s : Muero: Soy el hilo %s"  %(datetime.now(), self.num)
    #End run#

### End MiThread ###


if __name__ == "__main__":
    """
    """
    for i in range(0, 10):
        t = MiThread(i)
        t.start() #El thread comienza a ejecutarse.
        t.join()  #Bloquea el hilo llamante hasta que finalice el thread que se llama.

"""
Ref:

http://mundogeek.net/archivos/2008/04/18/threads-en-python/#more-1462

http://docs.python.org/2/library/threading.html
"""

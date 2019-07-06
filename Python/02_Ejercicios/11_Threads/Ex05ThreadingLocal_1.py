#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
"""

import os
import sys
import time
import threading
from datetime import datetime


def f():
    datos_locales = threading.local()
    datos_locales.mi_var = time.clock()
    print datos_locales.mi_var
### End f ###


if __name__ == "__main__":
    """
    """
    t = threading.Thread(target = f)
    t.start()  
    #t.join()

    t = threading.Thread(target = f)
    t.start()
### End ###


"""
Ref:
http://mundogeek.net/archivos/2008/04/18/threads-en-python/#more-1462

http://docs.python.org/2/library/threading.html
"""

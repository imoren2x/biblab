def synchronized(lock):
    def dec(f):
        def func_dec(*args, **kwargs):
            lock.acquire()
            try:
                return f(*args, **kwargs)
            finally:
                lock.release()
        return func_dec
    return dec


class MyThread(threading.Thread):
    @synchronized(mi_lock)
    def run(self):
        print "metodo sincronizado"

"""
Ref:

http://mundogeek.net/archivos/2008/04/18/threads-en-python/#more-1462

http://docs.python.org/2/library/threading.html
"""
semaforo = threading.Semaphore(4)

def descargar(url):
    semaforo.acquire()
    urllib.urlretrieve(url)
    semaforo.release()

"""
Ref:

http://mundogeek.net/archivos/2008/04/18/threads-en-python/#more-1462

http://docs.python.org/2/library/threading.html
"""

#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
forma recomendada de crear threads: instanciar Thread directamente.
t = threading.Thread(target=imprime, args=(i, ), name = "nombre del thread")
    Par�metros del constructor:
        A. Clase ejecutable
            clase con el m�todo especial __call__
        B. Funci�n a ejecutar y los argumentos en una tupla (args) o diccionario (kwargs).
            t = threading.Thread(target=imprime, args=(i, ))
    Otros par�metros:
        name: nombre del thread
        verbose: imprima mensajes
        group: crear grupos de threads y trabajar a nivel de grupos.
"""

import threading

def imprime(num):
    print "Soy el hilo", num
###End imprime###

def main():
    """
    """
    print "Soy el hilo principal"
    for i in range(0, 10):
        t = threading.Thread(target=imprime, args=(i, ))
        t.start()
        t.join()
        
        print "Estado: %s" %(t.isAlive())
        #threading.enumerate lista de objetos threads que se est�n ejecutando.
        print "Threads: %s" %(threading.enumerate())
        #threading.activeCount consultar el n�mero de threads ejecut�ndose.
        print "Numero de threads: %s" %(threading.activeCount())
### END main ###


if __name__ == "__main__":
    """
    """
    main()

"""
M�todos interesantes:
    .isAlive comprueba si un thread sigue ejecut�ndose.
    .setName/getName para configurar el nombre del hilo.
    threading.enumerate lista de objetos threads que se est�n ejecutando.
    threading.activeCount consultar el n�mero de threads ejecut�ndose.
    .setDaemon devuelve un booleano si se trata de un demonio.
"""

"""
Ref:

http://mundogeek.net/archivos/2008/04/18/threads-en-python/#more-1462

http://docs.python.org/2/library/threading.html
"""

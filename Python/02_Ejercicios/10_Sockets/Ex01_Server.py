#!/usr/bin/python
# -*- coding: latin-1 -*-


"""
Ejemplo completo:
    I. Servidor:
        La ejecución termina cuando el usuario escribe quit:
"""

import socket


def main():
    s = socket.socket()
    s.bind(("localhost", 7777))
    s.listen(1)  # Numero de conexiones maximas #
    sc, addr = s.accept()

    while True:
        recibido = sc.recv(1024)
        if recibido == "quit":
            break
        print "Recibido:", recibido
        sc.send(recibido)

    print "adios"
    sc.close()
    s.close()


if __name__ == "__main__":
    """
    """
    main()

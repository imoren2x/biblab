#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
"""

import socket


def main():
    """
    """
    msj = ""
    print "Cliente 1.0"
    host, port = "localhost", 7777
    sock = socket.socket()
    sock.connect((host, port))

    while (msj != "salir"):
        print "Ingrese un mensaje o salir para terminar"
        msj = raw_input("Vd. dice: ")
        try:
            sock.send(msj)
        except:
            print "No se mandó el mensaje"
            msj = "salir"

    sock.close()
### END main ###


if __name__ == "__main__":
    """
    """
    main()

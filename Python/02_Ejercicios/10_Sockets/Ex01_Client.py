#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
II. Cliente:
"""

import socket


def main():
    """
    """
    client = socket.socket()
    client.connect(("localhost", 7777))

    while True:
        mensaje = raw_input("> ")
        client.send(mensaje)
        if mensaje == "quit":
            break

    print "adios"
    client.close()


if __name__ == "__main__":
    """
    """
    main()

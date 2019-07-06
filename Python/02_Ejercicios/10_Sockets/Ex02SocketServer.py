#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
"""

import SocketServer


class MiTcpHandler(SocketServer.BaseRequestHandler):
    """
    Manejador del socket server.
    """

    def handle(self):
        """
        """
        self.oracion = self.request.recv(1024).strip()
        # strip remueve los espacios #
        self.num = len(self.oracion)
        print "La oracion recv es %s " %(self.oracion)
        print "La longitud es %s" %(self.num)
        self.request.send(str(self.num))
    #End handle#

#End MiTcpHandler#


def main():
    """
    """
    print "Tutorial 53: Creación de un SocketServer."
    #
    host = "localhost"
    port = 7777

    server1 = SocketServer.TCPServer((host, port), MiTcpHandler)
    server1.serve_forever() # Se ejecuta hasta que se cierre #


if __name__ == "__main__":
    """
    """
    main()

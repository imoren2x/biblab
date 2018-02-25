#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
"""

import SocketServer
import threading
import time
import re


class MiTcpHandler(SocketServer.BaseRequestHandler):
    """
    """
    def handle(self):
        """
        """
        data = ""
        while data != "salir":
            try:
                data = self.request.recv(1024)
                regex = re.compile("salir|quit")
                if not( bool(regex.match(data)) ):
                    print data
                    time.sleep(0.1) #Espera 100 ms#
                else:
                    break
            except:
                print "El cliente se desconectó o hubo un error"
                data = "salir"
        #End while#
    #End handle#

### END MiTcpHandler ###


class ThreadServer(SocketServer.ThreadingMixIn, SocketServer.ForkingTCPServer):
    """
    """
    pass
### End ThreadServer ###


def main():
    """
    """
    #host and port#
    host = "localhost"
    port = 7777

    server = ThreadServer((host, port), MiTcpHandler)
    server_thread = threading.Thread(target = server.serve_forever)
    server_thread.start()
    print "server corriendo..."


if __name__ == "__main__":
    """
    """
    main()

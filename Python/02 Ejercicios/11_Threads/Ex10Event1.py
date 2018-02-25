#!/usr/bin/python
# -*- coding: latin-1 -*-

"""
Los eventos, implementados mediante al clase Event, son un wrapper por encima de Condition y sirven principalmente para coordinar threads mediante señales que indican que se ha producido un evento. Los eventos nos abstraen del hecho de que estemos utilizando un Lock por debajo, por lo que carece de métodos acquire y release.

El thread que debe esperar el evento llama al método wait y se bloquea, opcionalmente pasando como parámetro un número en coma flotante indicando el número máximo de segundos a esperar. Otro hilo, cuando ocurre el evento, manda la señal a los threads bloqueados a la espera de dicho evento utilizando el método set. Los threads que estaban esperando se desbloquean una vez recibida la señal. El flag que determina si se ha producido el evento se puede volver a establecer a falso usando clear.
"""

import threading, time

class MiThread(threading.Thread):
    def __init__(self, evento):
        threading.Thread.__init__(self)
        self.evento = evento

    def run(self):
        print self.getName(), "esperando al evento"
        self.evento.wait()
        print self.getName(), "termina la espera"


if __name__ == '__main__':
    evento = threading.Event()
    t1 = MiThread(evento)
    t1.start()
    t2 = MiThread(evento)
    t2.start()

    # Esperamos un poco
    print("Esperamos cinco segundillos.")
    time.sleep(5)
    print("Y hacemos un event.set().")
    evento.set()

"""
Ref:

http://mundogeek.net/archivos/2008/04/18/threads-en-python/#more-1462

http://docs.python.org/2/library/threading.html
"""

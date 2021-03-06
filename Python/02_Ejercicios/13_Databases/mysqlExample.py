#!/usr/bin/python
# -*- coding: latin-1 -*-
"""
"""

import os
import sys
import time
import sqlite3 as dbapi


if __name__ == "__main__":
    """
    """
    #Get global parameters
    print dbapi.apilevel
    print dbapi.threadsafety
    print dbapi.paramstyle

    #Connection
    bbdd = dbapi.connect("bbdd.dat")

    #Get a cursor
    cursor = bbdd.cursor()

    #First request#
    sqlReq1 = """
        create table empleados (dni text, nombre text, departamento text)
        """
    #Execution of the first request
    cursor.execute(sqlReq1)

    #Second request#
    sqlReq2 = """insert into empleados values ('12345678-A', 'Manuel Gil', 'Contabilidad')"""

    #Execution of the second request#
    cursor.execute(sqlReq2)

    #Commit of the DB#
    bbdd.commit()

    cursor.execute("""select * from empleados
        where departamento='Contabilidad'""")

    #Get results
    for tupla in cursor:
        print tupla

    #Acceso a metodos de cursor
    c.fetchall()
    c.fetchone()
    c.fetchone()

    #Cierre del cursor y de la DB
    cursor.close()
    bbdd.close()
###END###

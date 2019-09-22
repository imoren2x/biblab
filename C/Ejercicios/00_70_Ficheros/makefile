#makefile
#OBJETOS = arbol.o pinta.o
CC = gcc
OPCIONES = -o
OPCIONES2 = -o -g -W -Wall
#
ORIGEN1 = EscribeArgv.c
DESTINO1 = EscribeArgv
ORIGEN2 = LeeArgv.c
DESTINO2 = LeeArgv

all:
	$(CC) $(OPCIONES) $(DESTINO1).exe $(ORIGEN1)
	$(CC) $(OPCIONES) $(DESTINO2).exe $(ORIGEN2)

escribe:
	$(CC) $(OPCIONES) $(DESTINO1).exe $(ORIGEN1)

lee:
	$(CC) $(OPCIONES) $(DESTINO2).exe $(ORIGEN2)

clean:
	del *.o

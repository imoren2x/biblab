#makefile
#OBJETOS = arbol.o pinta.o
CC = gcc
OPCIONES = -o
OPCIONES2 = -o -g -W -Wall
DESTINO1 = Factorial
ORIGEN1 = Factorial.c
ORIGEN2 = Zeller.ISO.c

all:
	$(CC) $(OPCIONES) $(DESTINO1).exe $(ORIGEN1)

iso:
	$(CC) $(OPCIONES) $(DESTINO1).iso.exe $(ORIGEN2)

clean:
	del *.o

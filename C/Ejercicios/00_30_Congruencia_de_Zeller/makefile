###mingw32-make
#makefile

CC = gcc
OPCIONES = -o
OPCIONES2 = -o -g -W -Wall -std=c99
DESTINO = zeller
BIN = $(DESTINO).exe

#all: $(BIN1) clean
all: $(BIN)

$(BIN):
	$(CC) $(OPCIONES) $@ zeller.c

clean:
	rm $(BIN)

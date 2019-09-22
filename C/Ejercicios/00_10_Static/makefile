##makefile##
##mingw32-make##

###############################
MAINAME = main
MAINSRC = $(MAINAME).c
BIN = $(MAINAME)

ADTNAME = module
ADTSRC = $(ADTNAME).c
ADTOBJ = $(ADTNAME).o

OBJETOS = $(ADTOBJ)
CC = gcc
OPCIONES = -g -W -Wall -std=c99
CFLAGS += -I.
###############################

all: $(BIN)
#all: $(BIN) clean

$(BIN):
	$(CC) $(OPCIONES) -o $@ $(MAINSRC)

clean:
	rm -f *.o
	rm $(BIN)

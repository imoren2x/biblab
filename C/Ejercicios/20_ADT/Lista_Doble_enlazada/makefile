##makefile##
##mingw32-make##

###############################
MAINAME = main
MAINSRC = $(MAINAME).c
BIN = $(MAINAME).exe

ADTNAME = ListaEnlazada
ADTHDR = $(ADTNAME).h
ADTSRC = $(ADTNAME).c
ADTOBJ = $(ADTNAME).o

OBJETOS = $(ADTOBJ)
CC = gcc
OPCIONES = -g -W -Wall -I. -I./lib
CFLAGS += -I.
###############################

all: $(BIN) clean

$(BIN): $(ADTOBJ)
	$(CC) $(OPCIONES) -o $@ $(MAINSRC) $(ADTOBJ)

$(ADTOBJ):
	$(CC) $(OPCIONES) -c ./lib/$(ADTSRC)

clean:
	rm -f *.o


#####################
# OBJETOS = arbol.o pinta.o
# CC = gcc
# OPCIONES = -g -W -Wall

# arbol: $(OBJETOS)
	# $(CC) $(OPCIONES) -o arbol $(OBJETOS)

# arbol.o: arbol.c pinta.h
	# $(CC) $(OPCIONES) -c arbol.c

# pinta.o: pinta.c pinta.h
	# $(CC) $(OPCIONES) -c pinta.c

# clean:
	# rm *.o

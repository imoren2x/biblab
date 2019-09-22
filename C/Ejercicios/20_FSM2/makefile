##makefile##
##mingw32-make##

###############################
MAINAME = main
MAINSRC = $(MAINAME).c
BIN = $(MAINAME).exe

ADTNAME = Fsm
ADTHDR = $(ADTNAME).h
ADTSRC = $(ADTNAME).c
ADTOBJ = $(ADTNAME).o

OBJETOS = $(ADTOBJ)
CC = gcc
OPCIONES = -g -W -Wall
CFLAGS += -I.
###############################

all: $(BIN) clean

$(BIN): $(ADTOBJ)
	$(CC) $(OPCIONES) -o $@ $(MAINSRC) $(ADTOBJ)

$(ADTOBJ): $(ADTSRC) $(ADTHDR)
	$(CC) $(OPCIONES) -c $(ADTSRC)

clean:
	rm -f *.o

#####################

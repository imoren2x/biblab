###mingw32-make
#makefile

CC = gcc
OPCIONES = -std=c99 -o
OPCIONES2 = -o -g -W -Wall -std=c99
MAIN1 = qsort_int
SRC1 = $(MAIN1).c
BIN1 = $(MAIN1).exe

MAIN2 = qsort_string
SRC2 = $(MAIN2).c
BIN2 = $(MAIN2).exe

#all: $(BIN1) clean
#all: $(BIN1)
all: $(BIN2)

$(BIN1):
	$(CC) $(OPCIONES) $@ $(SRC1)

$(BIN2):
	$(CC) $(OPCIONES) $@ $(SRC2)


clean:
	rm $(BIN1); rm $(BIN2)

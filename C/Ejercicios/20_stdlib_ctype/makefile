###mingw32-make
###makefile

NAME1 = Ex01toascii
NAME2 = Ex02toupperlower
NAME3 = Ex03ctypeMacros

OBJECTS1 = $(NAME1).c
OBJECTS2 = $(NAME2).c
OBJECTS3 = $(NAME3).c

CC = gcc
OPTIONS_1 = -g -W -Wall
OPTIONS_2 = -g -Wall
BIN1 = $(NAME1).exe
BIN2 = $(NAME2).exe
BIN3 = $(NAME3).exe

##########################

all: $(BIN1) $(BIN2) $(BIN3)

$(BIN1): $(OBJECTS1)
	$(CC) $(OPTIONS_2) -o $(BIN1) $(OBJECTS1)

$(BIN2): $(OBJECTS2)
	$(CC) $(OPTIONS_2) -o $(BIN2) $(OBJECTS2)

$(BIN3): $(OBJECTS3)
	$(CC) $(OPTIONS_2) -o $(BIN3) $(OBJECTS3)

### arbol.o: arbol.c pinta.h
#### $(CC) $(OPCIONES) -c arbol.c

### pinta.o: pinta.c pinta.h
#### $(CC) $(OPCIONES) -c pinta.c

### msg.o : msg.c msg.h
###    gcc -c $< -o $@

clean:
	rm *.o

###########################
# mingw32-make

###mingw32-make
###makefile

NAME1 = ExampleTime1
NAME2 = ExampleTime2
OBJECTS1 = $(NAME1).c
OBJECTS2 = $(NAME2).c
CC = gcc
OPTIONS_1 = -g -W -Wall
OPTIONS_2 = -g -Wall
BIN1 = $(NAME1).exe
BIN2 = $(NAME2).exe

##########################

all: $(BIN1) $(BIN2)

$(BIN1): $(OBJECTS1)
	$(CC) $(OPTIONS_2) -o $(BIN1) $(OBJECTS1)

$(BIN2): $(OBJECTS2)
	$(CC) $(OPTIONS_2) -o $(BIN2) $(OBJECTS2)

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

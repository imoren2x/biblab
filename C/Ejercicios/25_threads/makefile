###mingw32-make
###makefile

NAME1 = Ex01Threads
NAME2 = Ex02Threads
NAME3 = Ex04Threads

OBJECTS1 = $(NAME1).c
OBJECTS2 = $(NAME2).c
OBJECTS3 = $(NAME3).c

CC = gcc
OPTIONS_1 = -g -W -Wall
OPTIONS_2 = -g -Wall
OPTIONS_3 = -lpthread
BIN1 = $(NAME1)
BIN2 = $(NAME2)
BIN3 = $(NAME3)

##########################

all: $(BIN1) $(BIN2) $(BIN3)

$(BIN1):
	$(CC) $(OPTIONS_2) -o $(BIN1) $(OBJECTS1) $(OPTIONS_3)

$(BIN2): $(OBJECTS2)
	$(CC) $(OPTIONS_2) -o $(BIN2) $(OBJECTS2) $(OPTIONS_3)

$(BIN3): $(OBJECTS3)
	$(CC) $(OPTIONS_2) -o $(BIN3) $(OBJECTS3) $(OPTIONS_3)

clean:
	rm *.o

###########################
# mingw32-make

###mingw32-make
###makefile
##########################
NAME1 = CC14Template01
NAME2 = CC14Template02
NAME3 = CC14Template05

OBJECTS1 = $(NAME1).cpp
OBJECTS2 = $(NAME2).cpp
OBJECTS3 = $(NAME3).cpp

CC = g++
OPTIONS_1 = -g -W -Wall
OPTIONS_2 = -g -Wall
BIN1 = $(NAME1).exe
BIN2 = $(NAME2).exe
BIN3 = $(NAME3).exe
##########################

all: $(BIN1) $(BIN2) $(BIN3)

$(BIN1):
	$(CC) $(OPTIONS_2) -o $@ $(OBJECTS1)

$(BIN2):
	$(CC) $(OPTIONS_2) -o $@ $(OBJECTS2)

$(BIN3): $(OBJECTS3)
	$(CC) $(OPTIONS_2) -o $@ $(OBJECTS3)

clean:
	rm *.o

###########################
# mingw32-make

###mingw32-make
###makefile
##########################
NAME1 = ExArray01
NAME2 = ExVector01
NAME3 = Ex04UsingNames

OBJECTS1 = $(NAME1).cpp
OBJECTS2 = $(NAME2).cpp
OBJECTS3 = $(NAME3).cpp

CC = g++
OPTIONS_1 = -std=c++11 -g -W -Wall
OPTIONS_2 = -g -Wall -std=c++11
BIN1 = $(NAME1).exe
BIN2 = $(NAME2).exe
BIN3 = $(NAME3).exe
##########################

all: $(BIN1) $(BIN2)
## $(BIN3)

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

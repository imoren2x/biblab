###mingw32-make
###makefile
##########################
NAME1 = Ign01MainRide
NAME3 = Ign01rideClasses
##
NAME2 = Ign02mainPoly
NAME4 = Ign02polyClasses

OBJECTS1 = $(NAME1).cpp
OBJECTS2 = $(NAME2).cpp
OBJECTS3 = $(NAME3).cpp
OBJECTS4 = $(NAME4).cpp

CC = g++
OPTIONS_1 = -std=c++11 -g -W -Wall
OPTIONS_2 = -g -Wall -std=c++11
BIN1 = $(NAME1).exe
BIN2 = $(NAME2).exe
BIN3 = $(NAME3).exe
BIN4 = $(NAME4).exe
##########################
all: $(BIN1) $(BIN2) clean

$(BIN1): $(BIN3)
	$(CC) $(OPTIONS_1) -o $@ $(OBJECTS1)

$(BIN3):
	$(CC) $(OPTIONS_2) -c $(OBJECTS3)

$(BIN2): $(BIN4)
	$(CC) $(OPTIONS_2) -o $@ $(OBJECTS2)

$(BIN4):
	$(CC) $(OPTIONS_2) -c $(OBJECTS4)

clean:
	rm *.o
###########################
# mingw32-make

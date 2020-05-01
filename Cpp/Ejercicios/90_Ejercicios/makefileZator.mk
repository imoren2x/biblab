# Project: una clase string

CPP     = g++.exe    # el compilador GNU C++
OBJ     = main.o string.o
LINKOBJ = main.o string.o
LIBS    = -L"C:/DEV-CPP/lib"
CXXINCS = -I"C:/DEV-CPP/lib/gcc/mingw32/3.4.2/include" \

          -I"C:/DEV-CPP/include/c++/3.4.2/backward" \

          -I"C:/DEV-CPP/include/c++/3.4.2/mingw32" \

          -I"C:/DEV-CPP/include/c++/3.4.2" -I"C:/DEV-CPP/include"
BIN     = string.exe
CXXFLAGS = $(CXXINCS) -fno-elide-constructors

.PHONY: clean

all: string.exe

clean:
    ${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
    $(CPP) $(LINKOBJ) -o "string.exe" $(LIBS)

main.o: main.cpp
    $(CPP) -c main.cpp -o main.o $(CXXFLAGS)

string.o: string.cpp
    $(CPP) -c string.cpp -o string.o $(CXXFLAGS)

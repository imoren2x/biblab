#include <stdio.h>
#include <stdlib.h>

using namespace std;

//class father
//class child

////////////struct father////////////
struct father {
  char *name;

  father(char *name);
  virtual char* getName();
};

/**
 * Constructor
 */
father::father(char *name) {
  this->name = name;
}

/**
 * Method
 */
char* father::getName() {
  //printf("%s\n", name);
  return this->name;
}
////////////struct father////////////


////////////struct child////////////
struct child:public father {
  char *surname;

  child(char *name, char *surname);
  virtual char *getName();
  char *getSurName();
};

child::child(char *name, char *surname):father(name) {
  this->surname = surname;
}

char* child::getName() {
  return "hey, campeone"; //this->name;
}

char *child::getSurName() {
  return this->surname;
}

////////////struct child////////////
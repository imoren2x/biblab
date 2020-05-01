#include <iostream>
#include <string>

using namespace std;

//class father
//class child

////////////struct father////////////
struct father {
  string name;

  father(const string name) { this->name = name; }
  virtual string getName() const { return this->name;}
};
////////////struct father////////////


////////////struct child////////////
struct child:public father {
  string surname;

  child(const string name, const string surname) : father(name) { this->surname = surname;}
  virtual string getName() const { return "hey, campeone soy el filio";}
  string getSurName() const { return this->surname; }
};
////////////struct child////////////
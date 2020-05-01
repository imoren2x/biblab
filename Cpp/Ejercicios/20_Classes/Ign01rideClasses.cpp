#include <iostream>
#include <string>

using namespace std;

/**
 * Father class
 */
struct father {
  string name;

  father() { this->name = "heeelloooo"; }
  father(const string name) {this->name = name;}
  string getName() const {return this->name;}
};


/**
 * Child class
 */
struct child : public father {
  string surname;

  child(const string name, const string surname): father(name) {this->surname = surname;}
  string getName() const {return this->name;}
  string getSurName() const {return this->surname;}
};
#include <iostream>
#include <string>

using namespace std;

/**
 * OverrideParent class
 */
struct OverrideParent {

    string name;

    OverrideParent() { this->name = "I'm the OverrideParent"; }
    OverrideParent(const string name) {this->name = name;}
    ~OverrideParent() {return;}

    string getName() const {return this->name;}
    string getSurName() const {return "";}
};


/**
 * OverrideChild class
 */
struct OverrideChild : public OverrideParent {

    string surname;
    int age = 0;

    OverrideChild(const string name, const string surname): OverrideParent(name) {this->surname = surname;}
    string getName() const {return OverrideParent::getName();}
    string getSurName() const {return this->surname;}
    int getAge() const {return this->age;}
};

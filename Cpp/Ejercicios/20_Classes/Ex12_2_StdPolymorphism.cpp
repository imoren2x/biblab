#include <iostream>
#include <string>

using namespace std;

/**
 * StdPolyParent class
 */
struct StdPolyParent {

    string name;

    StdPolyParent() { this->name = "I'm the StdPolyParent"; }
    ~StdPolyParent() {return;}
    StdPolyParent(const string name) {this->name = name;}
    virtual string getName() const {return this->name;}
    virtual string getSurName() const { return "";}
};


/**
 * StdPolyChild class
 */
struct StdPolyChild : public StdPolyParent {

    string surname;
    int age = 0;

    StdPolyChild(const string name, const string surname): StdPolyParent(name) {this->surname = surname;}
    virtual string getName() const {return StdPolyParent::getName();}
    virtual string getSurName() const {return this->surname;}
    int getAge() const { return this->age;}
};

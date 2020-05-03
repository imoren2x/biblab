#include <iostream>
#include <string>

using namespace std;

/**
 * PurePolyParent class
 */
struct PurePolyParent {

    string name;

    PurePolyParent() { this->name = "I'm the PurePolyParent"; }
    ~PurePolyParent() {return;}
    PurePolyParent(const string name) {this->name = name;}
    virtual string getName() const {return this->name;}
    virtual string getSurName() const = 0;
};


/**
 * Child class
 */
struct PurePolyChild : public PurePolyParent {

    string surname;
    int age = 0;

    PurePolyChild(const string name, const string surname): PurePolyParent(name) {this->surname = surname;}
    virtual string getName() const {return PurePolyParent::getName();}
    virtual string getSurName() const {return this->surname;}
    int getAge() const { return this->age;}
};

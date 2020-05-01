// standard exceptions
#include <iostream>
#include <exception>
using namespace std;

//No es un buen ejemplo//
class myexception: public exception {
  virtual const char* what() const throw() {
    return "My exception happened\n";
  }

  public:
	int who() const {
		try {
			throw 3;//"This exception tries, throws and catches.";
		} catch (int i) {//catch (char* str) {
			cout << "This exception tries, throws and catches."; << endl;
		}
		return 0;
		//return "This exception tries, throws and catches.";
	}
};

// class myexception myex;
class myexception myex;

int main () {
  try {
    throw myex;
  } catch (exception& e) {
    cout << e.what() << endl;
  }
  myex.who();

  return 0;
}
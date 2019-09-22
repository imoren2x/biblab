// constructors and derived classes
#include <iostream>
using namespace std;

//The default base constructor will always be called
// "mother: no parameters\n"

class mother {
  public:
    mother ()
      { cout << "mother: no parameters\n"; }
    mother (int a)
      { cout << "mother: int parameter\n"; }
};

class daughter : public mother {
  public:
    daughter (int a)
      { cout << "daughter: int parameter\n\n"; }
};

class son : public mother {
  public:
    son (int a) : mother (a)//Base Constr before derived Constr
      { cout << "son: int parameter\n\n"; }
};

class child : public mother {
	public:
		child(int a) {
			cout << "child: int parameter\n\n";
			mother m(a);
		}
};

int main () {
  daughter cynthia (0);
  son daniel(0);

  child ignacio(3);

  return 0;
}
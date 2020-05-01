#include <iostream>
#include "Ign02polyClasses.cpp"

using namespace std;

int main(int n, char *arg[]) {
  father *pf;
  child *pc;

  father f("John");
  string name = f.getName();
  cout << "Name: " << name;

  child c("John", "Williams");
  cout << "Name: " << c.getName();
  name = c.getSurName();
  cout << "Surname: " << c.getSurName();

  pf = &f;
  pf->getName();
  cout << "Father Name with father ptr: " << pf->getName() << endl;

  pf = &c;
  cout << "Child Name with father ptr: " << pf->getName() << endl;

  pc = &c;
  cout << "Child Name with child ptr: " << pf->getName() << endl;

  cout << "Pulse una tecla para terminar." << endl;
  cin.get();
  return 0;
}
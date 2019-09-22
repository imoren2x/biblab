#include <iostream>
#include <string>
#include "Ign01rideClasses.cpp"

using namespace std;

int main(int n, char* arg[]) {
  father *pf = new father("Father");
  //father *pf = new father[2] = { father("hoey"), father("aaa") };
  //father *pf = new father[2]();
  //child *pc;

  father f("John");
  string name = f.getName();
  cout << "Father f Name: " << name << endl;
  cout << "Father ptr_f Name: " << pf->getName() << endl; //Father
  delete pf;
  pf = &f;

  child c("John", "Williams");
  cout << "Child name: " << c.getName() << endl;
  cout << "Child surname: " << c.getSurName() << endl;

  pf = &c;
  cout << "pf = &c;" << endl;
  cout << "Name: " << pf->getName() << endl;
  //cout << "Surname: " << pf->getSurName() << endl;
  //ERROR, father class has no method getSurName

  cout << "Pulse una tecla para terminar." << endl;
  cin.get();
  return 0;
}

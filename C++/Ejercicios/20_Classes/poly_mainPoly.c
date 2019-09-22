#include <cstdlib>
#include <iostream>
#include "poly.cpp"

using namespace std;

int main(int n, char *arg[]) {
  father *pf;
  child *pc;

  father f("John");
  char *name = f.getName();
  printf("Name: %s\n", name);

  child c("John", "Williams");
  name = c.getName();
  printf("Surname: %s\n", name);
  name = c.getSurName();
  printf("Surname: %s\n", name);

  pf = &f;
  pf->getName();
  printf("Name: %s\n", pf->getName());

  pf = &c;
  pf->getName();
  printf("Name: %s\n", pf->getName());

  pc = &c;
  printf("Name: %s\n", pc->getName());

  return 0;
}

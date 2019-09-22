// overloaded function
#include <iostream>
using namespace std;

int operate (const int a, const int b = 3) {
  return (a * b);
}

float operate (const float a, const float b) {
  return (a / b);
}

int operate (const float a) {
  return (a);
}

int main () {
  int x = 5, y = 2;
  float n = 5.0, m = 2.0;

  cout << operate (x,y);
  cout << "\n";
  cout << operate (x);
  cout << "\n";
  cout << operate (n,m);
  cout << "\n";
  cout << operate (n);
  cout << "\n";

  return 0;
}
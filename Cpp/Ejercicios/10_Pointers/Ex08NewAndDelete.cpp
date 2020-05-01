#include <iostream>
#include <new>
using namespace std;

//nothrow is used to return NULL pointer instead of //
//	bad_alloc exception//

int main () {
  int i,n;
  int *p;

  cout << "How many numbers would you like to type? ";
  cin >> i;

  //new pointer to int with i-positions//
  p = new (nothrow) int[i];
  
  if (p == 0)
    cout << "Error: memory could not be allocated";
  else {
    for (n = 0; n < i; n++) {
      cout << "Enter number: ";
      cin >> p[n];
    }
    cout << "You have entered: ";
    for (n = 0; n < i; n++)
      cout << p[n] << ", ";
	
	//Delete this memory position//
    delete[] p;
  }

  return 0;
}
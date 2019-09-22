#include <iostream>

using namespace std;

int main() {
  int **ptr;
  *ptr = new int;
  int* ptrInt;

  cout << "Ptr: " <<  ptr[0] << endl;

  delete[] ptr;

 return 0;

}
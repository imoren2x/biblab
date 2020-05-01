// my first string
#include <iostream>
#include <string>

using namespace std;

//Reference: http://www.cplusplus.com/reference/string/string/

int main () {
  string mystring;
  mystring = "This is the initial string content";
  string mystring2 ("This is a string");
  cout << mystring << endl;
  mystring = "This is a different string content";
  cout << mystring << endl;
  return 0;
}
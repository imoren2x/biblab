// arrays example
#include <iostream>

using namespace std;

const int LEN = 5;
int billy [] = {16, 2, 77, 40, 12071};
int n, result=0;

int main ()
{
  for ( n=0 ; n < LEN ; n++ )
  {
    result += billy[n];
  }
  cout << result;
  return 0;
}
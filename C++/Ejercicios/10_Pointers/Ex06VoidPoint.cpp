// increaser
#include <iostream>
using namespace std;

/* void pointer needs always casting */
void increase (void* data, int psize) {
  if ( psize == sizeof(char) ) { 
	char* pchar; 
	pchar=(char*)data; //void pointer needs casting//
	++(*pchar); 
  } else if (psize == sizeof(int) ) { 
	int* pint; 
	pint=(int*)data; 
	++(*pint); 
  }
}

int main (  ) {
  char a = 'x';
  int b = 1602;
  
  increase (&a,sizeof(a));
  increase (&b,sizeof(b));
  
  cout << a << ", " << b << endl;
  
  return 0;
}
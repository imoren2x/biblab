#include <iostream>
using namespace std;

int main (  ) {
	//Variable definitions//
	int number;
	int *tommy = &number;
	//Equivalent to
	// int number;
	// int *tommy;
	// tommy = &number;

	//NOT equivalent to//
	// int number;
	// int *tommy;
	// *tommy = &number;

  return 0;
}
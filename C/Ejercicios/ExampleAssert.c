#include <stdio.h>
#include <stdlib.h>

//if enabled, avoids asserts//
#define NDEBUG
#include <assert.h> //for strlen

int suma(int a, int b);

int main(int argn, char* argv[]) {

	//assert correcto//
	assert( suma(1,1) == 2 );

	//assert incorrecto, it will create exception//
	assert( suma(1,1) == 3 );

	return 0;
}

int suma(int a, int b) {
	return a + b;
}

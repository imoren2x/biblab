#include <iostream>
#include <new>
using namespace std;

//new y delete con Punteros y dobles punteros//
int main() {
	//Variable definition//
	char *c;
	int *i = NULL;
	float **f;
	int n;

	// Cadena de 122 más el nulo:
	c = new char[123];
	// Array de 10 punteros a float:
	f = new float*[10]; //(1)
	// Cada elemento del array es un array de 10 float
	for (n = 0; n < 10; n++)
		f[n] = new float[10]; //(2)

	// f es un array de 10*10
	f[0][0] = 10.32;
	f[9][9] = 21.39;
	c[0] = 'a';
	c[1] = 0;

	// liberar memoria dinámica
	for(n = 0; n < 10; n++)
		delete[] f[n];
	//Liberar el puntero a float*//
	delete[] f;
	//Liberar puntero a char//
	delete[] c;
	delete i;

	return 0;
}
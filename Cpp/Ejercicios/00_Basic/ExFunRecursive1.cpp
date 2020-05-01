#include <iostream>
#include <limits.h>
#include <cstdlib>

using namespace std;

int factorial(int n);

int main(int argc, char *argv[]) {

	int i;

	if (argc == 1) {
		cout << "Introduce un numero del cero al 31 (ambos incluidos)" << endl;
		cin >> i;
		cout << "Factorial de " << i << ": " << factorial(i) << endl;
	} else if (argc == 2) {
		i = atoi(argv[1]);

		cout << "Factorial de " << i << ": " << factorial(i) << endl;
		//printf("Factorial de 7: %d", factorial(7));
	}
	return 0;
}

/* Función recursiva para cálculo de factoriales */
int factorial(int n) {
	if(n < 0) return 0;
	else if(n > 1) return n*factorial(n-1); /* Recursividad */

	return 1; /* Condición de terminación, n == 1 */
}
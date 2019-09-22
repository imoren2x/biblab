#include <iostream>

using namespace std;

/**
 * Pointer to functions
 * Definicion
 * Asignacion/apuntar
 * Llamada
 * Argumento de una funcion
 *   Formal parameter
 *   Actual parameter
 */


int Fun1(int);
int Fun2(int);
int Fun3(int);
int Fun4(int);

int main() {
	int (*pf1[4])(int); // Array de punteros a función con un
	// argumento int que devuelven un int.
	int num;
	int valores;

	pf1[0] = Fun1;
	pf1[1] = Fun2;
	pf1[2] = Fun3;
	pf1[3] = Fun4;

	do {
		cout << "Introduce un número entre 1 y 4, "
		<< "0 para salir: ";
		cin >> num;
		if((num >= 1) && (num <= 4)) {
			cout << "Introduce un número entre 1 y 10: ";
			cin >> valores;
			if ((valores > 0) && (valores < 11))
				pf1[num-1](valores);
		}
	} while (num != 0);

	return 0;
}

int Fun1(int v) {
	while(v--) cout << "1" << endl;
	return 1;
}

int Fun2(int v) {
	while(v--) cout << "Muestra 2" << endl;
	return 2;
}
int Fun3(int v) {
	while(v--) cout << "Muestra 3" << endl;
	return 3;
}

int Fun4(int v) {
	while(v--) cout << "Muestra 4" << endl;
	return 4;
}
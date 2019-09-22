#include <iostream>

using namespace std;

/** Operador const_cast<>
 * Se usa para eliminar o añadir los modificadores const y volatile de una expresión. */

int main() {
	const int x = 10;
	int *x_var;
	x_var = const_cast<int*> (&x); // Válido
	// x_var = &x; // Ilegal, el compilador da error
	*x_var = 14; // Indefinido
	cout << *x_var << ", " << x << endl;

	cout << "\n\n Pulse una tecla para terminar." << endl;
	cin.get();
	return 0;
}
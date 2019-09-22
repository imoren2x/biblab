#include <iostream>

using namespace std;

/**
 * Catch generico que captura todas las exceptions
 * catch(...)
 */

int main() {
	try {
		throw 'x'; //
	} catch(int c) {
		cout << "El valor de c es: " << c << endl;
	} catch(...) {
		cout << "Excepción imprevista" << endl;
	}

	cout << "\n\n Pulse una tecla para continuar." << endl;
	cin.get();

	return 0;
}
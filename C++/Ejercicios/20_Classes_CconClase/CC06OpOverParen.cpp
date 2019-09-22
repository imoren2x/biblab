#include <iostream>
#include <cstdlib>

using namespace std;

/**
 * Añadiremos un operador de llamada a función que admita dos parámetros de tipo double y que devuelva el mayor contador de los asociados a cada uno de los parámetros.
 */

class Cuenta {
	public:
		Cuenta() { for(int i = 0; i < 4; contador[i++] = 0); }
		int &operator[](double n); // (1)
		void mostrar() const;
		int operator()(double n, double m);
	private:
		int contador[4];
};

int Cuenta::operator()(double n, double m) {
	int i, j;

	if (n < 0.001) i = 0;
	else if (n < 0.01) i = 1;
	else if (n < 0.1) i = 2;
	else i = 3;
	if (m < 0.001) j = 0;
	else if (m < 0.01) j = 1;
	else if (m < 0.1) j = 2;
	else j = 3;
	if (contador[i] > contador[j]) return contador[i];
	else return contador[j];
}

int &Cuenta::operator[](double n) { // (2)
	if (n < 0.001) return contador[0];
	else if (n < 0.01) return contador[1];
	else if (n < 0.1) return contador[2];
	else return contador[3];
}

void Cuenta::mostrar() const {
	cout << "Entre 0 y 0.0009: " << contador[0] << endl;
	cout << "Entre 0.0010 y 0.0099: " << contador[1] << endl;
	cout << "Entre 0.0100 y 0.0999: " << contador[2] << endl;
	cout << "Entre 0.1000 y 1.0000: " << contador[3] << endl;
}

int main() {
	Cuenta C;

	for(int i = 0; i < 50000; i++)
		C[(double)rand()/RAND_MAX]++; // (3)


	C.mostrar();

	cout << C(0.0034, 0.23) << endl;

	system("pause");
	return 0;
}
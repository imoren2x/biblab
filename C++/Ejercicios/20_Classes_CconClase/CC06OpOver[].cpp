#include <iostream>
#include <cstdlib>

using namespace std;

/**
 * Supongamos que hacemos una clase para hacer un histograma de los valores de rand()/RAND_MAX, entre los márgenes de 0 a 0.0009, de 0.001 a 0.009, de 0.01 a 0.09 y de 0.1 a 1.
 */

class Cuenta {
	public:
		Cuenta() { for(int i = 0; i < 4; contador[i++] = 0); }
		int &operator[](double n); // (1)
		void mostrar() const;
	private:
		int contador[4];
};


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

	system("pause");
	return 0;
}
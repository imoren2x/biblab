#include <iostream>

using namespace std;

/** Inicialización de clases base en constructores */

class ClaseA {
	public:
		ClaseA(int a) : datoA(a) {
		cout << "Constructor de A" << endl;
		}
		int LeerA() const { return datoA; }
	protected:
		int datoA;
};

class ClaseB : public ClaseA {
	public:
		ClaseB(int a, int b) : ClaseA(a), datoB(b) { //(1)
			cout << "Constructor de B" << endl;
		}
		int LeerB() const { return datoB; }
	protected:
		int datoB;
};

int main() {
	ClaseB objeto(5,15);

	cout << "a = " << objeto.LeerA() << ", b = "
	<< objeto.LeerB() << endl;

	cout << "Pulsa una tecla para terminar." << endl;
	cin.get();
	return 0;
}
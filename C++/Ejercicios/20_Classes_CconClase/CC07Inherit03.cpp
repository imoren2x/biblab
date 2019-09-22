#include <iostream>

using namespace std;

/** Inicialización de objetos miembros de clases */

class ClaseA {
	public:
		ClaseA(int a) : datoA(a) {
			cout << "Constructor de A" << endl;
		}
		int LeerA() const { return datoA; }
	protected:
		int datoA;
};

class ClaseB {
	public:
		ClaseB(int a, int b) : cA(a), datoB(b) { //(1)
			cout << "Constructor de B" << endl;
		}
		int LeerB() const { return datoB; }
		int LeerA() const { return cA.LeerA(); } //(2)
	protected:
		int datoB;
		ClaseA cA;
};


int main() {
	ClaseB objeto(5,15);
	cout << "a = " << objeto.LeerA() << ", b = "
	<< objeto.LeerB() << endl;

	cout << "Pulse una tecla para terminar." << endl;
	cin.get();
	return 0;
}
#include <iostream>

using namespace std;

/** Destructores de clases derivadas */

class ClaseA {
	public:
		ClaseA() : datoA(10) {
			cout << "Constructor de A" << endl;
		}
		~ClaseA() { cout << "Destructor de A" << endl; }
		int LeerA() const { return datoA; }
	protected:
		int datoA;
	};

class ClaseB : public ClaseA {
	public:
		ClaseB() : datoB(20) {
			cout << "Constructor de B" << endl;
		}
		~ClaseB() { cout << "Destructor de B" << endl; }
		int LeerB() const { return datoB; }
	protected:
		int datoB;
};

int main() {
	ClaseB objeto;

	cout << "a = " << objeto.LeerA() << ", b = "
		<< objeto.LeerB() << endl;

	cout << "Pulse una tecla para terminar." << endl;
	cin.get();
	return 0;
}
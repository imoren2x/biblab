#include <iostream>

using namespace std;

/** Superposición y sobrecarga
 * En (1) hay ERROR de compilacion
*/

class ClaseA {
	public:
		void Incrementar() { cout << "Suma 1" << endl; }
		void Incrementar(int n) { cout << "Suma " << n << endl; }
};

class ClaseB : public ClaseA {
	public:
	void Incrementar() { cout << "Suma 2" << endl; }
};

int main() {
	ClaseB objeto;

	objeto.Incrementar();
	//objeto.Incrementar(10);// (1) ERROR de compilacion//
	objeto.ClaseA::Incrementar();
	objeto.ClaseA::Incrementar(10);

	cout << "\nPulse una tecla para continuar." << endl;
	cin.get();
	return 0;
}
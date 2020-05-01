#include <iostream>

using namespace std;

/** Funciones virtuales
 * Redefinición de funciones en clases derivadas
 * La definición de la función "Mostrar" en la ClaseB (1) oculta la definición previa de la función en la ClaseA (2).
*/


class ClaseA {
	public:
		ClaseA() : datoA(10) {}
		int LeerA() const { return datoA; }
		void Mostrar() {
			cout << "a = " << datoA << endl; //(1)
		}
	protected:
		int datoA;
};

class ClaseB : public ClaseA {
	public:
		ClaseB() : datoB(20) {}
		int LeerB() const { return datoB; }
		void Mostrar() {
			cout << "a = " << datoA << ", b = "
				<< datoB << endl; //(2)
		}
	protected:
		int datoB;
};

int main() {
	ClaseB objeto;

	objeto.Mostrar();
	objeto.ClaseA::Mostrar();

	cout << "\n\nPulsa una tecla para continuar." << endl;
	cin.get();
	return 0;
}
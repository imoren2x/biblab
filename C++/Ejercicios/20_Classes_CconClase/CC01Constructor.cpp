#include <iostream>
#include <cstdlib>

using namespace std;

//Constructor con asignacion
//Constructor con inicializacion
/**
 * Ciertos miembros es obligatorio inicializarlos, ya que no pueden ser asignados, por ejemplo las constantes o las referencias. Es muy recomendable usar la inicialización siempre que sea posible en lugar de asignaciones, ya que se desde el punto de vista de C++ es mucho más seguro.
 *
 */


class pareja {
	public:
		// Constructor
		pareja(int a2 = 0, int b2 = 0);
		// Constructor copia:
		pareja(const pareja &p);
		// Funciones miembro de la clase "pareja"
		void Lee(int &a2, int &b2);
		void Guarda(int a2, int b2);
	private:
		// Datos miembro de la clase "pareja"
		int a, b;
};

/**
 * Constructor con asignacion *
 */
pareja::pareja(int a2, int b2) {
	a = a2;
	b = b2;
}

/**
 * Constructor con inicializacion *
 */
//pareja::pareja(int a2, int b2) : a(a2), b(b2) {}

// Constructor copia:
pareja::pareja(const pareja &p) : a(p.a), b(p.b) {}

void pareja::Lee(int &a2, int &b2) {
	a2 = a;
	b2 = b;
}

void pareja::Guarda(int a2, int b2) {
	a = a2;
	b = b2;
}

int main() {
	pareja par1(12, 32);
	pareja par2;
	int x, y;
	par1.Lee(x, y);

	par2 = par1; //copia los valores de datos miembros//

	cout << "Valor de par1.a: " << x << endl;
	cout << "Valor de par1.b: " << y << endl;

	system("pause");
	return 0;
}
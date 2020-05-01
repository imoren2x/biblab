#include <iostream>
#include <typeinfo>

using namespace std;

/** Operador typeid */
/** const type_info typeid(<tipo>)
	const type_info typeid(<objeto>)
*/

struct punto3D {
  int x,y,z;
};

union Union {
  int x;
  float z;
  char a;
};

class Clase {
  public:
    Clase() {}
};

typedef int Entero;

int main() {
	int x;
	float y;
	int z[10];
	punto3D punto3d;
	Union uni;
	Clase clase;
	void *pv;

	cout << "Variable int: " << typeid(x).name() << endl;
	cout << "Variable float: " << typeid(y).name() << endl;
	cout << "Array de 10 int:" << typeid(z).name() << endl;
	cout << "Estructura global: " << typeid(punto3d).name()
	<< endl;
	cout << "Unión global: " << typeid(uni).name() << endl;
	cout << "Clase global: " << typeid(clase).name()
	<< endl;
	cout << "Puntero void: " << typeid(pv).name() << endl;
	cout << "Typodef Entero: " << typeid(Entero).name()
	<< endl;

	if (typeid(Entero) == typeid(int))
		cout << "int y Entero son el mismo tipo" << endl;

	cout << "\n\n Pulse una tecla para terminar." << endl;
	cin.get();
	return 0;
}
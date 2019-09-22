#include <iostream>
#include <cstdlib>

using namespace std;

//funcion que recibe un puntero o una referencia//
void funcion(int *q);

int main() {
	int a;
	int *p;
	a = 100;
	p = &a;//p apunta a la direccion de a//

	// Llamamos a funcion con un puntero funcion(p);
	cout << "Variable a: " << a << endl;
	cout << "Variable *p: " << *p << endl;

	// Llamada a funcion con la dirección de "a" (constante)
	funcion(&a);
	cout << "Variable a: " << a << endl;
	cout << "Variable *p: " << *p << endl;

	system("pause");
	return EXIT_SUCCESS;
}

void funcion(int *q) {
	// Cambiamos el valor de la variable apuntada por
	// el puntero
	*q += 50;
	//q++;
}
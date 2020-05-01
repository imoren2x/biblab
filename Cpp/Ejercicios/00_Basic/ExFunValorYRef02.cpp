#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

/**
 * Funcion que devuelve una referencia
 * (otro ejemplo es la sobrecarga de operadores)
 */
int &Acceso(int*, int);

//Esta funcion no puede devolver una referencia//
//int &suma(int , int ); //Ver abajo//

int main() {
	int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	Acceso(array, 3)++;
	Acceso(array, 6) = Acceso(array, 4) + 10;

	cout << "array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};" << endl;
	cout << "Valor de array[3]: " << array[3] << endl;
	cout << "Valor de array[6]: " << array[6] << endl;

	// int a = array[3];
	// int b = array[6];
	// cout << "Valor de suma(array[3],array[6]): "
		// << suma(&a, &b) << endl;

	//cin.get();
	system("pause");

	return 0;
}

/**
 * Sobre la salida, se accede como una referencia
 */
int &Acceso(int* vector, int indice) {
	return vector[indice];
}

//Esta funcion no puede devolver una ref//
// int &suma(int a, int b) {
	// return (a + b);
// }
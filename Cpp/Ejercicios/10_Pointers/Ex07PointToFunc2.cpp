// pointer to functions
#include <iostream>
using namespace std;

/**
 * Pointer to functions
 * Definicion
 * Asignacion/apuntar
 * Llamada
 * Argumento de una funcion
 *   Formal parameter
 *   Actual parameter
 */

#include <iostream>
using namespace std;

int Muestra1();
int Muestra2();
int Muestra3();
int Muestra4();

int main(  ) {
	//Pointer to function: definition//
	int (*pf1)();

	// Puntero a funci�n sin argumentos que devuelve un int.
	int num;

	do {
		cout << "Introduce un n�mero entre 1 y 4, "
		<< "0 para salir: ";
		cin >> num;
		if ( (num >= 1) && (num <=4) ) {
			switch(num) {
				case 1:
					//pointing//
					pf1 = Muestra1;
					break;
				case 2:
					//pointing//
					pf1 = Muestra2;
					break;
				case 3:
					//pointing//
					pf1 = Muestra3;
					break;
				case 4:
					//pointing//
					pf1 = Muestra4;
					break;
				}
			//Call the function//
			pf1();
			}
	} while(num != 0);

	return 0;
}

int Muestra1() {
	cout << "Muestra 1" << endl;
	return 1;
}

int Muestra2() {
	cout << "Muestra 2" << endl;
	return 2;
}

int Muestra3() {
	cout << "Muestra 3" << endl;
	return 3;
}

int Muestra4() {
	cout << "Muestra 4" << endl;
	return 4;
}
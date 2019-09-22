#include <iostream>
#include <cstdarg>

using namespace std;


/**
 * va_list
 *
 * va_arg: void va_start(va_list ap, ultimo);
 *	Ajusta el valor de "ap" para que apunte al primer parámetro de la lista.
 *  <ultimo> es el identificador del último parámetro fijo antes de comenzar la lista.
 *
 * tipo va_arg(va_list ap, tipo);
 *   Devuelve el siguiente valor de la lista de parámetros, "ap" debe ser la misma variable que se actualizó previamente con "va_start",
 *   "tipo" es el tipo del parámetro que se tomará de la lista.
 *
 * void va_end(va_list va);
 *   Permite a la función retornar normalmente, restaurando el estado de la pila, esto es necesario porque algunas de las macros anteriores pueden modificarla, haciendo que el programa termine anormalmente.
 *
 */

/*
<tipo> funcion(<tipo> <id1> [, <tipo> <id2>...], ...) {
	va_list ar; // Declarar una variable para manejar la lista
	va_start(ar, <idn>); // <idn> debe ser el nombre del último
	// parámetro antes de ...
	<tipo> <arg>; // <arg> es una variable para recoger
	// un parámetro

	while ( (<arg> = va_arg(ar, <tipo>)) != 0) {
		// <tipo> debe ser el mismo que es de <arg>
		// Manejar <arg>
	}

	va_end(ar); // Normalizar la pila
}
*/

void funcion(int a, ...);

int main() {
	funcion(1, "cadena 1", 0);
	funcion(1, "cadena 1", "cadena 2", "cadena 3", 0);
	funcion(1, 0);
	cin.get();
	return 0;
}

void funcion(int a, ...) {
	va_list p;
	va_start(p, a);
	char *arg;

	while ((arg = va_arg(p, char*))) {
		cout << arg << " ";
	}

	va_end(p);

	cout << endl;
}

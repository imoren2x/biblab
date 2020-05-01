#include <iostream>
#include <fstream>

using namespace std;

/**
 * Crear un fichero de salida, abrir un fichero de entrada.
 */

int main() {
	char cadena[128];
	// Crea un fichero de salida
	ofstream fs("CC11Files01.txt");
	// Enviamos una cadena al fichero de salida:
	fs << "Hola, mundo" << endl;
	// Cerrar el fichero,
	// para luego poder abrirlo para lectura:
	fs.close();

	// Abre un fichero de entrada
	ifstream fe("CC11Files01.txt");
	// Leeremos mediante getline, si lo hiciéramos
	// mediante el operador >> sólo leeríamos
	// parte de la cadena:
	fe.getline(cadena, 128);

	cout << cadena << endl;

	cout << "\n Pulse una tecla para terminar." << endl;
	cin.get();
	return 0;
}
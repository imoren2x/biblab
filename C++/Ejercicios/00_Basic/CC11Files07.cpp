#include <fstream>
#include <iostream>

using namespace std;

/**
 * Comprobar estado de un stream (ver tambien CC11Files07.cpp)
 * La función principal para esto es good(), de la clase ios.
 * Otras funciones útiles son fail(), eof(), bad(), rdstate() o clear().
 */

int main() {
	char mes[20];
	ifstream fich("meses1.dat", ios::in | ios::binary);
	// El fichero meses1.dat no existe, este programa es
	// una prueba de los bits de estado.

	if(fich.good()) {
		fich.read(mes, 20);
		cout << mes << endl;
	} else {
		cout << "Fichero no disponible" << endl;
		if(fich.fail()) cout << "Bit fail activo" << endl;
		if(fich.eof()) cout << "Bit eof activo" << endl;
		if(fich.bad()) cout << "Bit bad activo" << endl;
	}
	fich.close();

	cout << "\n\n Pulse una tecla para continuar." << endl;
	cin.get();
	return 0;
}
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
	ofstream fich1("meses.dat", ios::out | ios::binary);
	ifstream fich("meses.dat", ios::in | ios::binary);

	// El fichero meses.dat existe, pero este programa
	// intenta abrir dos streams al mismo fichero, uno en
	// escritura y otro en lectura. Eso no es posible, se
	// trata de una prueba de los bits de estado.
	fich.read(mes, 20);
	if(fich.good())
		cout << mes << endl;
	else {
		cout << "Error al leer de Fichero" << endl;
		if(fich.fail()) cout << "Bit fail activo" << endl;
		if(fich.eof()) cout << "Bit eof activo" << endl;
		if(fich.bad()) cout << "Bit bad activo" << endl;
	}

	fich.close();
	fich1.close();

	cout << "\n\n Pulse una tecla para continuar." << endl;
	cin.get();
	return 0;
}
#include <fstream>
#include <iostream>

/**
 * La funci�n seekg nos permite acceder a cualquier punto del fichero, no tiene por qu� ser exactamente al principio de un registro, la resoluci�n de la funciones seek es de un byte.
 */

using namespace std;

int main() {
	int i;
	char mes[][20] = {"Enero", "Febrero", "Marzo",
		"Abril", "Mayo", "Junio", "Julio", "Agosto",
		"Septiembre", "Octubre", "Noviembre",
		"Diciembre"};
	char cad[20];

	ofstream fsalida("meses.dat",
		ios::out | ios::binary);

	// Crear fichero con los nombres de los meses:
	cout << "Crear archivo de nombres de meses:" << endl;
	for(i = 0; i < 12; i++)
		fsalida.write(mes[i], 20);

	fsalida.close();
	ifstream fentrada("meses.dat", ios::in | ios::binary);
	// Acceso secuencial:
	cout << "\nAcceso secuencial:" << endl;
	fentrada.read(cad, 20);
	do {
		cout << cad << endl;
		fentrada.read(cad, 20);
	} while (!fentrada.eof());

	fentrada.clear();
	// Acceso aleatorio:
	cout << "\nAcceso aleatorio:" << endl;
	for(i = 11; i >= 0; i--) {
		fentrada.seekg(20*i, ios::beg);
		fentrada.read(cad, 20);
		cout << cad << endl;
	}
	// Calcular el n�mero de elementos
	// almacenados en un fichero:
	// ir al final del fichero
	fentrada.seekg(0, ios::end);
	// leer la posici�n actual
	int pos = fentrada.tellg();
	// El n�mero de registros es el tama�o en
	// bytes dividido entre el tama�o del registro:
	cout << "\nN�mero de registros: " << pos/20 << endl;
	fentrada.close();

	cout << "\n\n Pulse una tecla para terminar." << endl;
	cin.get();
	return 0;
}
#include <iostream>
#include <string>
#include <cstdio>
#include <cstdlib>

using namespace std;

/**
 * Dobles punteros
 * Primer caso: char Mes[][11] hay que dar la longitud
 * Segundo caso: char *Mes2[] no hay que darla
 */
int main() {
	char Mes[][11] = { "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto","Septiembre", "Octubre", "Noviembre", "Diciembre"};

	char *Mes2[] = { "Enero", "Febrero", "Marzo", "Abril","Mayo", "Junio", "Julio", "Agosto","Septiembre", "Octubre", "Noviembre", "Diciembre"};

	string* Mes3 = new string[12];
	Mes3[0] = "Enero";
	Mes3[1] = "Febrero";
	Mes3[2] = "Marzo";
	Mes3[3] = "Abril";
	Mes3[4] = "Mayo";
	Mes3[5] = "Junio";
	Mes3[6] = "Julio";
	Mes3[7] = "Agosto";
	Mes3[8] = "Septiembre";
	Mes3[9] = "Octubre";
	Mes3[10] = "Noviembre";
	Mes3[11] = "Diciembre";


	cout << "Tamaño de Mes: " << sizeof(Mes) << endl;
	cout << "Tamaño de Mes2: " << sizeof(Mes2) << endl;
	cout << "Tamaño de cadenas de Mes2: " << &Mes2[11][10]-Mes2[0] << endl;
	cout << "Tamaño de Mes2 + cadenas : " << sizeof(Mes2)+&Mes2[11][10]-Mes2[0] << endl;

	cout << Mes3[8] << endl;

	//Liberacion de memoria
	delete[] Mes;
	delete[] Mes2;
	delete[] Mes3;

	system("pause");
	return EXIT_SUCCESS;
}
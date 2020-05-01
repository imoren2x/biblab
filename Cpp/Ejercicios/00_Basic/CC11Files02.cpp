#include <iostream>
#include <fstream>

using namespace std;

int main() {
	char cadena[128];
	ifstream fe("CC11Files01.cpp");

	while(!fe.eof()) {
		fe >> cadena;
		cout << cadena << endl;
	}

	fe.close();

	cout << "\n Pulse una tecla para terminar." << endl;
	cin.get();
	return 0;
}
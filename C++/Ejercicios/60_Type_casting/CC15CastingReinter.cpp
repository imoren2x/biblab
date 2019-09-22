#include <iostream>
#include <iomanip>

using namespace std;

/** Operador reinterpret_cast<>
 * reinterpret_cast<tipo> (<expresión>);
 * Se usa para hacer cambios de tipo a nivel de bits, es decir, el valor de la "expresión" se interpreta como si fuese un objeto del tipo "tipo".
 */

int main() {
	int x = 0x12dc34f2;
	int *pix = &x;
	unsigned char *pcx;
	pcx = reinterpret_cast<unsigned char *> (pix);

	cout << hex << " = "
		<< static_cast<unsigned int> (pcx[0]) << ", "
		<< static_cast<unsigned int> (pcx[1]) << ", "
		<< static_cast<unsigned int> (pcx[2]) << ", "
		<< static_cast<unsigned int> (pcx[3]) << endl;

	cout << "\n\n Pulse una tecla para terminar." << endl;
	cin.get();

	return 0;
}
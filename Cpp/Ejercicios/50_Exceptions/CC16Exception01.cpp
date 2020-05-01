#include <iostream>
#include <limits>

using namespace std;

int main() {
	int *x;
	int y = numeric_limits<int>::max();

	try {
		x = new int[y];
		x[0] = 10;

		cout << "Puntero: " << (void *) x << endl;
		delete[] x;
	} catch(std::bad_alloc&) {
		cout << "Memoria insuficiente" << endl;
	}

	cout << "\nPulsa una tecla para continuar." << endl;
	cin.get();
	return 0;
}
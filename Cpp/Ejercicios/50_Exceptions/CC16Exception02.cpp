#include <iostream>

using namespace std;

int main() {
	try {
		throw 'x'; // valor de tipo char
	} catch (char c) {
		cout << "El valor de c es: " << c << endl;
	} catch(int n) {
		cout << "El valor de n es: " << n << endl;
	}

	cout << "\n Pulse una tecla para terminar." << endl;
	cin.get();

	return 0;
}
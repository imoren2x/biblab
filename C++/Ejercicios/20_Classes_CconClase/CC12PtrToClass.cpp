#include <iostream>

using namespace std;

class clase {
  public:
    clase(int a, int b) : x(a), y(b) {}
  public:
    int x;
    int y;
};

int main() {
	clase uno(6,10);
	//Puntero a clase//
	clase *dos = new clase(88,99);

	//Puntero a miembro de clase//
	int clase::*puntero;
	puntero = &clase::x;

	cout << uno.*puntero << endl;
	cout << dos->*puntero << endl;

	puntero = &clase::y;

	cout << uno.*puntero << endl;
	cout << dos->*puntero << endl;

	delete dos;

	cout << "\nPulse una tecla para terminar." << endl;
	cin.get();
	return 0;
}
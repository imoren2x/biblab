#include <iostream>

using namespace std;

/** Operador static_cast<> */

class Base {
  public:
    Base(int valor) : x(valor) {}
    void Mostrar() { cout << x << endl; }
  protected:
    int x;
};

class Derivada : public Base {
  public:
    Derivada(int ivalor, float fvalor) :
    Base(ivalor), y(fvalor) {}
    void Mostrar() {
      cout << x << ", " << y << endl;
    }
  private:
    float y;
};

int main() {
	Derivada *pDer = new Derivada(10, 23.3);
	Base *pBas;

	pDer->Mostrar(); // Derivada
	pBas = static_cast<Base *> (pDer);
	// pBas = pDer; // Igualmente legal, pero implícito
	pBas->Mostrar(); // Base

	delete pDer;

	cout << "Pulse una tecla para terminar." << endl;
	cin.get();
	return 0;
}
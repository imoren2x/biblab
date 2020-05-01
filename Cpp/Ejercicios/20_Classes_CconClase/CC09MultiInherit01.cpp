#include <iostream>

using namespace std;

/**
 * Herencia multiple
 * cout << CC.LeerValor() << endl;
 * 	Produce error de compilación por ambigüedad.
 */

class ClaseA {
  public:
    ClaseA() : valorA(10) {}
    int LeerValor() const { return valorA; }
  protected:
    int valorA;
};

class ClaseB {
  public:
    ClaseB() : valorB(20) {}
    int LeerValor() const { return valorB; }
  protected:
    int valorB;
};

class ClaseC : public ClaseA, public ClaseB {};

int main() {
	ClaseC CC;

	// cout << CC.LeerValor() << endl;
	// Produce error de compilación por ambigüedad.
	cout << CC.ClaseA::LeerValor() << endl;
	cout << CC.ClaseB::LeerValor() << endl;

	cout << "Pulsa una tecla para terminar." << endl;
	cin.get();
	return 0;
}
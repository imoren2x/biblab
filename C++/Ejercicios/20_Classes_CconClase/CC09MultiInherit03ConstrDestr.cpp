#include <iostream>
using namespace std;

/* Constructores de clases con herencia múltiple */

class ClaseA {
  public:
    ClaseA() : valorA(10) {}
    ClaseA(int va) : valorA(va) {}
    int LeerValor() const { return valorA; }
  protected:
    int valorA;
};

class ClaseB {
  public:
    ClaseB() : valorB(20) {}
    ClaseB(int vb) : valorB(vb) {}
    int LeerValor() const { return valorB; }
  protected:
    int valorB;
};

class ClaseC : public ClaseA, public ClaseB {
  public:
	/* Constructor heredado */
    ClaseC(int va, int vb) : ClaseA(va), ClaseB(vb) {};
    int LeerValorA() const { return ClaseA::LeerValor(); }
    int LeerValorB() const { return ClaseB::LeerValor(); }
};

int main() {
  ClaseC CC(12,14);

  cout << CC.LeerValorA() << ","
    << CC.LeerValorB() << endl << endl;

  cout << "\nPulse una tecla para terminar." << endl;
  cin.get();

  return 0;
}
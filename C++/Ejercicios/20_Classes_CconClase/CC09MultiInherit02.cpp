#include <iostream>

using namespace std;

/**
Una solución para resolver la ambigüedad de CC09MultiInherit01.
 Redefinido la función "LeerValor" en la clase derivada de modo que se superpusiese a las funciones de las clases base.
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

class ClaseC : public ClaseA, public ClaseB {
  public:
    int LeerValor() const { return ClaseA::LeerValor(); }
};


int main() {
  ClaseC CC;

  cout << CC.LeerValor() << endl;

  cout << "Pulsa una tecla para terminar." << endl;
  cin.get();
  return 0;
}
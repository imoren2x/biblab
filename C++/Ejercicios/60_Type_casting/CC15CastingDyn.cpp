#include <iostream>

using namespace std;

class ClaseA {
  public:
    ClaseA(int x) : valorA(x) {}
    void Mostrar() {
      cout << valorA << endl;
    }
    virtual void nada() {} // Forzar polimorfismo
  private:
    int valorA;
};

class ClaseB {
  public:
    ClaseB(float x) : valorB(x) {}
    void Mostrar() {
      cout << valorB << endl;
    }
  private:
    float valorB;
};

class ClaseD : public ClaseA, public ClaseB {
  public:
    ClaseD(int x, float y, char c) :
    ClaseA(x), ClaseB(y), valorD(c) {}
    void Mostrar() {
      cout << valorD << endl;
    }
  private:
    char valorD;
};

int main() {
  ClaseA *cA = new ClaseD(10,15.3,'a');
  ClaseB *cB = dynamic_cast<ClaseB*> (cA);

  cA->Mostrar();
  cB->Mostrar();

  cout << "\n\n Pulse una tecla para terminar." << endl;
  cin.get();
  return 0;
}
#include <iostream>

using namespace std;

/** Operador static_cast<> */

class Tiempo {
  public:
    Tiempo(int h=0, int m=0) : hora(h), minuto(m) {}
    void Mostrar();
    operator int() {
      return hora*60+minuto;
	}
  private:
    int hora;
    int minuto;
};

void Tiempo::Mostrar() {
  cout << hora << ":" << minuto << endl;
}

int main() {
  Tiempo Ahora(12,24);
  int minutos;

  Ahora.Mostrar();
  minutos = static_cast<int> (Ahora);
  // minutos = Ahora; // Igualmente legal, pero implícito
  cout << minutos << endl;

  cout << "Pulse una tecla para terminar." << endl;
  cin.get();
  return 0;
}
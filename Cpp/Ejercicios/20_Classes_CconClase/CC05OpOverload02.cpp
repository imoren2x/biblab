#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class Cadena {
	public:
	  Cadena() : cadena(NULL) {};
	  Cadena(char *cad);
	  Cadena(const Cadena &c);
	  ~Cadena() { delete[] cadena; };
	  Cadena& operator=(const Cadena &c);
	  int operator==(const Cadena &c);
	  void mostrar() const;
	private:
	  char* cadena;//Cuidado con el copy constructor //
	  // y el operator overloading y el operator ==//
};

Cadena::Cadena(char *cad) {
  cadena = new char[strlen(cad)+1];
  strcpy(cadena, cad);
}

/* Copy constructor */
Cadena::Cadena(const Cadena &c) : cadena(NULL) {
	//Prevents cadena
	if (this != &c) {
		cadena = new char[strlen(c.cadena)+1];
		strcpy(this->cadena, c.cadena);
	}
}

void Cadena::mostrar() const {
  cout << cadena << endl;
}

Cadena& Cadena::operator=(const Cadena &c) {
	if(this != &c) {
		delete[] cadena;
		if (c.cadena) {
			cadena = new char[strlen(c.cadena)+1];
			strcpy(cadena, c.cadena);
		} else cadena = NULL;
	}
	return *this;
}

int Cadena::operator==(const Cadena &c) {
	return ( strcmp(this->cadena, c.cadena) == 0 ) ? 1 : 0;
}

int main () {
	Cadena C1("Cadena de prueba"), C2;
	Cadena C3(C1);

	C2 = C1;
	C1 = "Otra cadena de prueba";

	C2.mostrar();
	C3.mostrar();

	if (C1 == C3) cout << "C1 y C3 Son iguales" << endl;
	else cout << "C1 y C3 No son iguales" << endl;

	if (C1 == C2) cout << "C1 y C2 Son iguales" << endl;
	else cout << "C1 y C2 No son iguales" << endl;

	if (C3 == C2) cout << "C3 y C2 Son iguales" << endl;
	else cout << "C3 y C2 No son iguales" << endl;

	system("pause");
}
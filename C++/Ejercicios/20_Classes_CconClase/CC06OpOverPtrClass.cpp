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
	  Cadena operator+(const Cadena &c);
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


Cadena Cadena::operator+(const Cadena &c) {
	Cadena temp;

	temp.cadena = new char[strlen(c.cadena)+strlen(cadena)+1];
	strcpy(temp.cadena, cadena);
	strcat(temp.cadena, c.cadena);

	return temp;
}

int main () {

  Cadena C1, C2("Primera parte");
  C1 = C2 + " Segunda parte";
  //C1.operator=(Cadena(C2.operator+(Cadena(" Segunda parte"))));

  C1.mostrar();

  system("pause");
}
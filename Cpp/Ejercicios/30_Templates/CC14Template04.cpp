
/** Funciones que usan plantillas como parámetros */

// F_Tabla2.cpp: ejemplo de función de plantilla
// Tabla genérica:
// C con Clase: Marzo de 2002
#include <iostream>
#include <cstdio>

// CCadena.h: Fichero de cabecera de definición de cadenas
// C con Clase: Marzo de 2002
#ifndef CCADENA
#define CCADENA
#include <cstring>
using std::strcpy;
using std::strlen;

class Cadena {
	public:
		Cadena(char *cad) {
			cadena = new char[strlen(cad)+1];
			strcpy(cadena, cad);
		}
		Cadena() : cadena(NULL) {}
		Cadena(const Cadena &c) : cadena(NULL) {*this = c;}
		~Cadena() { if(cadena) delete[] cadena; }
		Cadena &operator=(const Cadena &c) {
			if (this != &c) {
				if (cadena) delete[] cadena;
				if (c.cadena) {
					cadena = new char[strlen(c.cadena)+1];
					strcpy(cadena, c.cadena);
				} else cadena = NULL;
			}
			return *this;
		}
		const char* Lee() const {return cadena;}
	private:
		char *cadena;
};

using namespace std;

ostream& operator<<(ostream &os, const Cadena& cad) {
	os << cad.Lee();
	return os;
}
#endif

// Tabla.h: definición de la plantilla tabla:
// C con Clase: Marzo de 2002
#ifndef T_TABLA
#define T_TABLA

template <class T>
class Tabla {
  public:
    Tabla(int nElem);
    ~Tabla();
    T& operator[](int indice) { return pT[indice]; }
   const int NElementos() { return nElementos; }
  private:
    T *pT;
    int nElementos;
};

// Definición:
template <class T> Tabla<T>::Tabla(int nElem) : nElementos(nElem) {
  pT = new T[nElementos];
}

template <class T> Tabla<T>::~Tabla() {
  delete[] pT;
}

#endif
const int nElementos = 5;

template<class T> void Mostrar(Tabla<T> &t); // (1)

int main() {
	Tabla<int> TablaInt(nElementos);
	Tabla<Cadena> TablaCadena(nElementos);
	char cad[20];

	for(int i = 0; i < nElementos; i++) TablaInt[i] = i;

	for(int i = 0; i < nElementos; i++) {
		sprintf(cad, "Cad no.: %2d", i);
		TablaCadena[i] = cad;
	}

	Mostrar(TablaInt); // (2)
	Mostrar(TablaCadena); // (3)

	cout << "\n\n Pulse una tecla para terminar." << endl;
	cin.get();
	return 0;
}

template<class T> void Mostrar(Tabla<T> &t) { // (4)
	for(int i = 0; i < t.NElementos(); i++)
		cout << t[i] << endl;
}
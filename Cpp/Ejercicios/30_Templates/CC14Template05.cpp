
/** Ejemplo de implementación de una plantilla para una
pila */

#include <iostream>
// Pila.h: definición de plantilla para pilas
// C con Clase: Marzo de 2002
#ifndef TPILA
#define TPILA
// Plantilla para pilas genéricas:
template <class T>
class Pila {
		// Plantilla para nodos de pila, definición
		// local, sólo accesible para Pila:
		template <class Tn>
		class Nodo {
			public:
				Nodo(const Tn& t, Nodo<Tn> *ant) : anterior(ant) {
					pT = new Tn(t);
				}
				Nodo(Nodo<Tn> &n) { // Constructor copia
					// Invocamos al constructor copia de la clase de Tn
					pT = new Tn(*n.pT);
					anterior = n.anterior;
				}
				~Nodo() { delete pT; }
				Tn *pT;
				Nodo<Tn> *anterior;
		};
		///// Fin de declaración de plantilla de nodo /////
		// Declaraciones de Pila:
	public:
		Pila() : inicio(NULL) {} // Constructor
		~Pila() { while(inicio) Pop(); }
		void Push(const T &t) {
		Nodo<T> *aux = new Nodo<T>(t, inicio);
		inicio = aux;
		}
		T Pop() {
		T temp(*inicio->pT);
		Nodo<T> *aux = inicio;
		inicio = aux->anterior;
		delete aux;
		return temp;
		}
		bool Vacia() { return inicio == NULL; }
	private:
		Nodo<T> *inicio;
	};
#endif

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

// Pru_Pila.cpp: Prueba de plantilla pila
// C con Clase: Marzo de 2002

using namespace std;
// Ejemplo de plantilla de función:
template <class T>
void Intercambia(T &x, T &y) {
Pila<T> pila;
pila.Push(x);
pila.Push(y);
x = pila.Pop();
y = pila.Pop();
};

int main() {
	Pila<int> PilaInt;
	Pila<Cadena> PilaCad;
	int x=13, y=21;
	Cadena cadx("Cadena X");
	Cadena cady("Cadena Y ----");

	cout << "x=" << x << endl;
	cout << "y=" << y << endl;

	Intercambia(x, y);
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
	cout << "cadx=" << cadx << endl;
	cout << "cady=" << cady << endl;

	Intercambia(cadx, cady);
	cout << "cadx=" << cadx << endl;
	cout << "cady=" << cady << endl;

	PilaInt.Push(32);
	PilaInt.Push(4);
	PilaInt.Push(23);
	PilaInt.Push(12);
	PilaInt.Push(64);
	PilaInt.Push(31);
	PilaCad.Push("uno");

	PilaCad.Push("dos");
	PilaCad.Push("tres");
	PilaCad.Push("cuatro");
	cout << PilaInt.Pop() << endl;
	cout << PilaInt.Pop() << endl;
	cout << PilaInt.Pop() << endl;
	cout << PilaInt.Pop() << endl;
	cout << PilaInt.Pop() << endl;
	cout << PilaInt.Pop() << endl;
	cout << PilaCad.Pop() << endl;
	cout << PilaCad.Pop() << endl;
	cout << PilaCad.Pop() << endl;
	cout << PilaCad.Pop() << endl;

	cout << "\n\n Pulse una tecla para terminar." << endl;
	cin.get();
	return 0;
}
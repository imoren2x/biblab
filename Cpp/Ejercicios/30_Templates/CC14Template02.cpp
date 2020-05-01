// Tabla.cpp: ejemplo de Tabla
// C con Clase: Marzo de 2002
#include <iostream>

using namespace std;

const int nElementos = 10;

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

int main() {
	Tabla<int> TablaInt(nElementos);
	Tabla<float> TablaFloat(nElementos);

	for(int i = 0; i < nElementos; i++)
		TablaInt[i] = nElementos-i;
	for(int i = 0; i < nElementos; i++)
		TablaFloat[i] = 1/(1+i);
	for(int i = 0; i < nElementos; i++) {
		cout << "TablaInt[" << i << "] = "
			<< TablaInt[i] << endl;
		cout << "TablaFloat[" << i << "] = "
			<< TablaFloat[i] << endl;
	}

	cout << "\n\n Pulse una tecla para terminar." << endl;
	cin.get();
	return 0;
}
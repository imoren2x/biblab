// TablaInt.cpp: Clase para crear Tablas de enteros
// C con Clase: Marzo de 2002

#include <iostream>

using namespace std;

template <class T>
class Tabla {
	public:
		Tabla(int nElem);
		~Tabla();
		T& operator[](int indice) { return pT[indice]; }
	private:
		T *pT;
		int nElementos;
};

// Definición:
template <class T>
	Tabla<T>::Tabla(int nElem) : nElementos(nElem) {
	pT = new T[nElementos];
}

template <class T>
	Tabla<T>::~Tabla() {
	delete[] pT;
}

int main() {
	Tabla<int> tabla(10);

	for(int i = 0; i < 10; i++)
		tabla[i] = 10-i;
	for(int i = 0; i < 10; i++)
		cout << tabla[i] << endl;

	cout << "\n\n Pulse una tecla para terminar." << endl;
	cin.get();
	return 0;
}
#include <iostream>
#include <cstdlib>

using namespace std;

/**
 * Si se declara un parámetro para un operador ++ ó -- se sobrecargará la forma sufija del operador.
 * El parámetro se ignorará, así que bastará con indicar el tipo.
 */

class Tiempo {
	public:
		Tiempo(int h=0, int m=0) : hora(h), minuto(m) {}
		Tiempo(const Tiempo &t);//Copy constructor//
		//IMPORTANTE el const//
		Tiempo operator++(); //Forma prefija
		Tiempo operator++(int); // Forma sufija
		void mostrar();
		Tiempo operator+(const Tiempo &h);
	private:
		int hora;
		int minuto;
};

Tiempo::Tiempo(const Tiempo &t) : hora(t.hora), minuto(t.minuto) { cout << "Llamo al constructor de copia" << endl;}

Tiempo Tiempo::operator++() {
	minuto++;
	while (minuto >= 60) {
		minuto -= 60;
		hora++;
	}
	return *this;
}

Tiempo Tiempo::operator+(const Tiempo &h) {
	Tiempo temp;
	temp.minuto = minuto + h.minuto;
	temp.hora = hora + h.hora;

	if (temp.minuto >= 60) {
		temp.minuto -= 60;
		temp.hora++;
	}
	return temp;
}

/* Operador unitario sufijo */
Tiempo Tiempo::operator++(int) {
	Tiempo temp(*this); //Constructor copia//
	minuto++;
	while (minuto >= 60) {
		minuto -= 60;
		hora++;
	}
	return temp;
}

void Tiempo::mostrar() {
	cout << hora << ":" << minuto << endl;
}

/** Programa principal */
int main() {
	Tiempo Ahora(12,24), T1(4,45);

	T1 = Ahora + T1; // (1)
	//(1) es Equivalente a Ahora.operator+(T1) //
	T1.mostrar();
	(Ahora + Tiempo(4,45)).mostrar(); // (2)

	cout << "T1 con prefijo antes: " << endl;
	T1.mostrar();
	++T1;
	cout << "T1 con prefijo despues: " << endl;
	T1.mostrar();

	cout << "T1 con sufijo antes: " << endl;
	(T1++).mostrar();
	cout << "T1 con prefijo despues: " << endl;
	T1.mostrar();

	system("pause");
	return 0;
}
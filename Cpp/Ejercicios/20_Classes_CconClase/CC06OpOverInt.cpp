#include <iostream>
#include <cstdlib>

using namespace std;

/**
 * Operador += con diferentes tipos
 *  Tiempo T1(12,23);
 *  int minutos;
 *  minutos = T1;
 */

class Tiempo {
	public:
		Tiempo(int h=0, int m=0) : hora(h), minuto(m) {}
		Tiempo(const Tiempo &t);//Copy constructor//
		Tiempo(unsigned int m); //Constructor con dif tipo//
		//IMPORTANTE el const//
		Tiempo operator++(); //Forma prefija
		Tiempo operator++(int); // Forma sufija
		operator int(); //METODO UNDER TEST
		void mostrar();
		Tiempo operator+(const Tiempo &h);
	private:
		int hora;
		int minuto;
};

/* Copy constructor */
Tiempo::Tiempo(const Tiempo &t) : hora(t.hora), minuto(t.minuto) { cout << "Llamo al constructor de copia" << endl;}

Tiempo::Tiempo(unsigned int m) : hora(0), minuto(m) {
	while(minuto >= 60) {
		minuto -= 60;
		hora++;
	}
}

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

Tiempo::operator int() {
	return hora*60+minuto;
}

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
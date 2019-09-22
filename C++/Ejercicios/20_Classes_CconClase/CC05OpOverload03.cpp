#include <iostream>
#include <cstdlib>

using namespace std;

class Tiempo {
	public:
		Tiempo(int h=0, int m=0) : hora(h), minuto(m) {}
		Tiempo(const Tiempo &t);//Copy constructor//
		//IMPORTANTE el const//
		void Mostrar();
		Tiempo operator+(const Tiempo &h);
		bool operator>(Tiempo h);
		void operator+=(Tiempo h);
	private:
		int hora;
		int minuto;
};

Tiempo::Tiempo(const Tiempo &t) : hora(t.hora), minuto(t.minuto) { cout << "Llamo al constructor de copia" << endl;}

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

bool Tiempo::operator>(Tiempo h) {
return (hora > h.hora ||
(hora == h.hora && minuto > h.minuto));
}

void Tiempo::operator+=(Tiempo h) {
	minuto += h.minuto;
	hora += h.hora;
	while(minuto >= 60) {
	minuto -= 60;
	hora++;
	}
}

void Tiempo::Mostrar() {
	cout << hora << ":" << minuto << endl;
}

/** Programa principal */
int main() {
	Tiempo Ahora(12,24), T1(4,45);

	T1 = Ahora + T1; // (1)
	//(1) es Equivalente a Ahora.operator+(T1) //
	T1.Mostrar();
	(Ahora + Tiempo(4,45)).Mostrar(); // (2)

	if(Tiempo(1,32) > Tiempo(1,12))
		cout << "1:32 es mayor que 1:12" << endl;
	else
		cout << "1:32 es menor o igual que 1:12" << endl;

	Ahora += Tiempo(1,32);
	Ahora.Mostrar();

	system("pause");
	return 0;
}
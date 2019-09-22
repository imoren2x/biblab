#include <iostream>
#include <cstring>

using namespace std;

/** Ejemplo con referencias */

class Persona {
	public:
		Persona(char *n) { strcpy(nombre, n); }
		virtual void VerNombre() {
			cout << nombre << endl;
		}
	protected:
		char nombre[30];
};

class Empleado : public Persona {
	public:
		Empleado(char *n) : Persona(n) {}
		void VerNombre() {
			cout << "Emp: " << nombre << endl;
		}
};

class Estudiante : public Persona {
	public:
		Estudiante(char *n) : Persona(n) {}
		void VerNombre() {
			cout << "Est: " << nombre << endl;
		}
};

int main() {
	Estudiante Pepito("Pepito");
	Empleado Carlos("Carlos");

	Persona &rPepito = Pepito; // Referencia como Persona
	Persona &rCarlos = Carlos; // Referencia como Persona

	rPepito.VerNombre();
	rCarlos.VerNombre();

	cout << "\nPulse una tecla para continuar." << endl;
	cin.get();
	return 0;
}
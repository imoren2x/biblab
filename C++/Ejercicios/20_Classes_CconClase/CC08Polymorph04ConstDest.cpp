#include <iostream>
#include <cstring>

using namespace std;

/**
 * Constructor y destructor virtual
 * Constructor:
 * Los constructores no pueden ser virtuales.
 * Esto puede ser un problema en ciertas ocasiones. Por ejemplo, el constructor copia no hará siempre aquello que esperamos que haga. En general no debemos usar el constructor copia cuando usemos punteros a clases base. Para solucionar este inconveniente se suele crear una función virtual "clonar" en la clase base que se superpondrá para cada clase derivada.
 *
 * Destructor:
 * Un destructor es una función como las demás, por lo tanto,
si destruimos un objeto referenciado mediante un puntero a la clase base, y el destructor no es virtual, estaremos llamando al destructor de la clase base. Esto puede ser desastroso, ya que nuestra clase derivada puede tener más tareas que realizar en su destructor que la clase base de la que procede.

Por lo tanto debemos respetar siempre ésta regla: si en una clase existen funciones
virtuales, el destructor debe ser virtual.
 */

class Persona {
	public:
		Persona(char *n) { strcpy(nombre, n); }
		Persona(const Persona &p);
		virtual ~Persona() { delete[] nombre; }
		virtual void VerNombre() {
			cout << nombre << endl;
		}
		virtual Persona* Clonar() { return new Persona(*this); }
	protected:
		char nombre[30];
};

Persona::Persona(const Persona &p) {
	strcpy(nombre, p.nombre);
	cout << "Per: constructor copia." << endl;
}

class Empleado : public Persona {
	public:
		Empleado(char *n) : Persona(n) {}
		Empleado(const Empleado &e);
		virtual ~Empleado() { delete[] nombre; }
		void VerNombre() {
			cout << "Emp: " << nombre << endl;
		}
		virtual Persona* Clonar() { return new Empleado(*this);}
};

Empleado::Empleado(const Empleado &e) : Persona(e) {
	cout << "Emp: constructor copia." << endl;
}

class Estudiante : public Persona {
	public:
		Estudiante(char *n) : Persona(n) {}
		Estudiante(const Estudiante &e) : Persona(e) {
			cout << "Est: constructor copia." << endl;
		}
		virtual ~Estudiante() { delete[] nombre; }
		void VerNombre() {
			cout << "Est: " << nombre << endl;
		}
		virtual Persona* Clonar() {
			return new Estudiante(*this);
		}
};

int main() {
	Persona *Pepito = new Estudiante("Pepito");
	Persona *Carlos = new Empleado("Carlos");
	Persona *Gente[2];

	Carlos->VerNombre();
	Pepito->VerNombre();

	Gente[0] = Carlos->Clonar();
	Gente[0]->VerNombre();
	Gente[1] = Pepito->Clonar();
	Gente[1]->VerNombre();

	delete Pepito;
	delete Carlos;
	delete Gente[0];
	delete Gente[1];

	cout << "\nPulse una tecla para terminar" << endl;
	cin.get();
	return 0;
}
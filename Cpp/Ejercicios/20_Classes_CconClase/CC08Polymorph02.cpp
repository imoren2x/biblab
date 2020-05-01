#include <iostream>
#include <cstring>

using namespace std;

/** Polimorfismo con virtual
 *
*/

class Persona {
	public:
	  Persona(char *n) { strcpy(nombre, n); }
	  virtual ~Persona() { delete[] nombre; }
	  virtual void VerNombre() { cout << "Persona: " << nombre << endl; }
	protected:
	  char nombre[30];
};

class Empleado : public Persona {
  public:
    Empleado(char *n) : Persona(n) {}
	virtual ~Empleado() { delete[] nombre; }
    void VerNombre() {
      cout << "Emp: " << nombre << endl;
	}
  protected:
	char apellido[15];
};

class Estudiante : public Persona {
  public:
    Estudiante(char *n) : Persona(n) {}
	virtual ~Estudiante() { delete[] nombre; }
    void VerNombre() {
      cout << "Est: " << nombre << endl;
    }
};

int main() {
	Persona *Pepito = new Estudiante("Jose");
	Persona *Carlos = new Empleado("Carlos");

	Carlos->VerNombre();//Muestra la clase base//
	Pepito->VerNombre();//Muestra la clase base//

	Carlos->VerNombre();
	Carlos->Persona::VerNombre();
	//Carlos->Empleado::VerNombre();//ERROR compilacion//

	delete Pepito;
	delete Carlos;

	cout << "\nPulse una tecla para continuar." << endl;
	cin.get();
	return 0;
}
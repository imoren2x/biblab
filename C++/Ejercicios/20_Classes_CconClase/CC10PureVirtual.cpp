#include <iostream>
#include <cstring>

using namespace std;

/** pure virtual function
 * Persona -- Empleado
 *    |------ Estudiante*/

class Persona {
  public:
    Persona(char *n) { strcpy(nombre, n); }
	/* pure virtual function */
    virtual void Mostrar() const = 0;
  protected:
    char nombre[30];
};

class Empleado : public Persona {
  public:
    Empleado(char *n, int s) : Persona(n), salario(s) {}
    void Mostrar() const;
    int LeeSalario() const { return salario; }
    void ModificaSalario(int s) { salario = s; }
  protected:
    int salario;
};

void Empleado::Mostrar() const {
	cout << "Empleado: " << nombre
		<< ", Salario: " << salario
		<< endl;
	}

class Estudiante : public Persona {
  public:
    Estudiante(char *n, float no) : Persona(n), nota(no) {}
    void Mostrar() const;
    float LeeNota() const { return nota; }
    void ModificaNota(float no) { nota = no; }
  protected:
    float nota;
};

void Estudiante::Mostrar() const {
    cout << "Estudiante: " << nombre
	  << ", Nota: " << nota << endl;
}

int main() {
  Persona *Pepito = new Empleado("Pepito", 1000); //(1)
  Persona *Pablito = new Estudiante("Pablo", 7.56);

  char n[30];
  Pepito->Mostrar();
  Pablito->Mostrar();

  cout << "Pulse una tecla para terminar." << endl;
  cin.get();
  return 0;
}
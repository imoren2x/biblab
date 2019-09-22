#include <iostream>
#include <cstdlib>

using namespace std;

class cadena {
	public:
		cadena(); // Constructor por defecto
		cadena(char *c); // Constructor desde cadena c
		cadena(int n); // Constructor para cadena de n caracteres
		cadena(const cadena &); // Constructor copia
		~cadena(); // Destructor
		void Asignar(char *dest);
		char *Leer(char *c) {
			strcpy(c, cad);
			return c;
		}
		/* Alternativamente */
		const char *Leer() { return cad; } //cad no es modificable
	private:
		char *cad; // Puntero a char: cadena de caracteres
};


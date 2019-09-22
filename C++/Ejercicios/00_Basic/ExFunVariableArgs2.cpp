#include <iostream>
#include <cstring>
#include <cstdarg>
#include <cstdlib>

using namespace std;

void funcion(char *formato, ...);

int main() {
	funcion("ciic", "Hola", 12, 34, "Adios");
	funcion("ccci", "Uno", "Dos", "Tres", 4);
	funcion("i", 1);
	system("pause");
	return 0;
}

void funcion(char *formato, ...) {
	va_list p;
	char *szarg;
	int iarg;
	int i;

	va_start(p, formato);

	/* analizamos la cadena de formato para saber el número y
	tipo de cada parámetro */
	for(i = 0; i < strlen(formato); i++) {
		switch(formato[i]) {
			case 'c': /* Cadena de caracteres */
				szarg = va_arg(p, char*);
				cout << szarg << " ";
				break;
			case 'i': /* Entero */
				iarg = va_arg(p, int);
				cout << iarg << " ";
				break;
		}
	}

	va_end(p);
	cout << endl;
}
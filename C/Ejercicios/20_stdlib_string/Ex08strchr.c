#include <stdio.h>
#include <string.h>

int main(int argn, char* argv[]) {
	char s[12] = "Hola amigos";
	char c = 'a';

	printf( "\n s = %s\t", s );
	printf( "\n c = %c\n", c );
	printf( "\n strchr = %s\n", strchr( s, c ) );

	printf( "\n La funci�n retorna un puntero a partir del \ncar�cter encontrado. Si no se ha encontrado el car�cter, \nc, entonces retorna un puntero null.");

	printf( "\n Si no encuentra un caracter (p.ej., 'z'), devuelve NULL" );
	printf( "\n strchr = %s\n", strchr( s, 'z' ) );

	return 0;
}
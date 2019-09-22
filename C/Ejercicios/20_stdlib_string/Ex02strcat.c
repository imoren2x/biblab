#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 256

int main(int argn, char* argv[]) {
	printf("\n Escribe la primera cadena a concatenar: ");
	printf("\n Por ej.: hola (sin espacios)");
	printf("\n>> ");
	char* s1 = (char*) calloc(LEN, sizeof(char));
	scanf("%s", s1);
	fflush(stdin);
	printf("\n Escribe la segunda cadena a concatenar: ");
	printf("\n Por ej.: caracola (sin espacios)");
	printf("\n>> ");
	char* s2 = (char*) calloc(LEN, sizeof(char));
	scanf("%s", s2);
	fflush(stdin);

	printf( "\n s1=%s\t", s1 );
	printf( "\n s2=%s\n", s2 );
	strcat( s1, s2 );
	printf( "\n s1=%s\n", s1 );

	return 0;
}
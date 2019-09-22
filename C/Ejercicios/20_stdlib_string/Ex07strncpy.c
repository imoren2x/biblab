#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 256

int main(int arg, char* argv[]) {
	printf("\n Escribe la cadena a copiar: ");
	printf("\n Por ej.: hola (sin espacios)");
	printf("\n>> ");
	char* s1 = (char*) calloc(LEN, sizeof(char));
	scanf("%s", s1);
	fflush(stdin);
	char* s2 = (char*) calloc(LEN, sizeof(char));
	printf("\n Escribe el numero de caracteres a copiar: ");
	printf("\n Por ej.: 4");
	printf("\n>> ");
	int i;
	scanf("%d", &i);
	fflush(stdin);

	strncpy( s2, s1, i );
	printf( "s2 = %s (original)\n", s2 );
	printf( "s1 = %s (copia)\n", s1 );

   return 0;
}
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

	strcpy( s2, s1 );
	printf( "s1 = %s (original)\n", s1 );
	printf( "s2 = %s (copia)\n", s2 );

   return 0;
}
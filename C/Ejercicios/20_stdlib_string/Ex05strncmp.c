#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 256

int main(int argn, char* argv[]) {
	printf("\n Escribe la primera cadena a comparar: ");
	printf("\n Por ej.: hola (sin espacios)");
	printf("\n>> ");
	char* s1 = (char*) calloc(LEN, sizeof(char));
	scanf("%s", s1);
	fflush(stdin);
	printf("\n Escribe la segunda cadena a comparar: ");
	printf("\n Por ej.: caracola");
	printf("\n>> ");
	char* s2 = (char*) calloc(LEN, sizeof(char));
	scanf("%s", s2);
	fflush(stdin);
	printf("\n Escribe el numero de caracteres a comparar: ");
	printf("\n Por ej.: 4");
	printf("\n>> ");
	int nChar;
	scanf("%d", &nChar);
	fflush(stdin);

	printf( "\n s1 = %s\t", s1 );
	printf( "\n s2 = %s\n", s2 );

	int i;

	i = strncmp( s1, s2, nChar );
	printf( "\n s1 es " );
	if ( i < 0 )  printf( "menor que" );
	else if( i > 0 )  printf( "mayor que" );
	else  printf( "igual a" );
	printf( " s2\n" );

	return 0;
}
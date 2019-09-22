/*
 ============================================================================
 Name        : 3_Pascal.c
 Author      : imoren2x
 Version     :
 Copyright   : Your copyright notice
 Description :
			Escribir una función recursiva Pascal(i,j) que calcule el
			elemento i, j del triángulo de Pascal, que sigue el
			siguiente patrón:
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int ifPascal(const int i, const int j);

int main(int argn, char *argv[])
{
	int iI, iJ;

etiqueta:
	fflush(stdin);
	printf("Escribe el binomio (i, j) de Pascal/Tartaglia: (p.ej., (3, 1) )");
	printf("\n >> ");
	scanf("(%d, %d)", &iI, &iJ);
	printf("\n >> ");
	printf("%d", ifPascal(iI, iJ));

	char sSig;
	printf("\n ");
	printf("\n +Quieres seguir? (S/N)");
	fflush(stdin);
	printf("\n >> ");
	scanf("%c", &sSig);
	switch(sSig)
	{
		case 'S': case 's': system("cls"); goto etiqueta; break;
		default : break;
	}

	printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}

int ifPascal(const int i, const int j) {
	if ( ( ( i == 0 ) && ( j == 0 ) ) || ( i == j ) || ( j == 0) )
	{
		return 1;
	} else {
		return ifPascal(i-1, j) + ifPascal(i-1, j-1);
	}
}

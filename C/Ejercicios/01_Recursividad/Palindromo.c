/*
 ============================================================================
 Name        : 4_Palindromo.c
 Author      : imoren2x
 Version     :
 Copyright   : Your copyright notice
 Description :
  Escribir una función recursiva Palindromo(c,i,j)
  que determine si la subcadena contenida entre las posiciones
  i y j de la cadena c es un palíndromo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEBUGCHK 0
#define iN 100

#define DEBUG(x,y)	if (!DEBUGCHK) \
				{x;} \
				else \
				{y;}

/**	if (!DEBUGCHK)
	{scanf("%s", sString);}
	else
	{sString = "bbaabc";}
*/
typedef enum eBool{false, true} bool;

bool bfPalindromo(const char *sString, int iI, int iJ);

int main(int argn, char *argv[]) {
	char *sString;
	int iI, iJ;

etiqueta:
	fflush(stdin);
	printf("Escribe la cadena palíndroma: ");
	printf("\n >> ");
	DEBUG(
			sString = (char*)malloc(iN*sizeof(char)); fgets(sString, iN, stdin),//scanf("%s", sString),
			sString = "mi perroorrep im")
	printf("Escribe la posicion inicial y final separado por espacio (p.ej., >> 1 2");
	printf("\n NOTA: 0 es la pimera posicion.");
	printf("\n >> ");
	fflush(stdin);
	DEBUG(scanf("%d %d", &iI, &iJ), iI = 0; iJ = 15)
	printf("\n >> ");
	if ( bfPalindromo(sString, iI, iJ) )
	{
		printf("Es palindroma!\n");
	}
	else
	{
		printf("No es palindroma\n");
	}

	char sSig;
	printf("\n ");
	printf("\n ¿Quieres seguir? (S/N)");
	fflush(stdin);
	printf("\n >> ");
	DEBUG(scanf("%c", &sSig), sSig = 'N')
	switch(sSig)
	{
		case 'S': case 's': system("cls"); goto etiqueta; break;
		default : break;
	}

	printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}

bool bfPalindromo(const char *sString, int iI, int iJ)
{
	bool bResult;

	if ( (iI <= iJ) && (iI >= 0) && (iJ <= strlen(sString)) ) {
		/**
		 * bResult = (sString[iI] == sString[iJ]);
		 * iI++; iJ--;
		 * while ( (bResult *= (sString[iI] == sString[iJ])) && ( iI < iJ) )
		 * {
		 * 		iI++;
		 * 		iJ--;
		 * }
		 */
		for ( bResult = (sString[iI] == sString[iJ]), iI++, iJ--; ( (bResult *= (sString[iI] == sString[iJ])) && ( iI < iJ)) ; iI++, iJ--)
		{	}
	} else {
		fprintf(stderr, "ERROR! iI y iJ son incorrectos. \n");
		printf("\n %d", iI);
		printf("\n %d", iJ);
		printf("\n %d \n", strlen(sString));
	}

	return bResult;
}

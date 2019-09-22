/*
 ============================================================================
 Name        : 5_Recursion_mutua.c
 Author      : imoren2x
 Version     :
 Copyright   : Your copyright notice
 Description : Escribir dos funciones mutuamente recursivas para calcular
 	 	 	 	 suma de los n primeros términos de la serie
 	 	 	 	 alternada:
 	 	 	 	 S = 1 - 1/2 + 1/3 - 1/4 + 1/5 · · · - 1/2i + 1/2i+1 · · ·
 	 	 	 Sugerencia: Escribir una función Pares(i) que calcule la suma
 	 	 	 hasta el término i (i par) y otra función Impar(i) que calcule
 	 	 	 la suma hasta el término i (i impar). Estas funciones deben
 	 	 	 llamarse una a la otra, hasta que se haya completado la suma de
 	 	 	 los n primeros términos. Para sumar los n primeros términos,
 	 	 	 escribir una función SumaSerie(n), que llamará a Par(n) o
 	 	 	 Impar(n) dependiendo de la paridad de n.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define DEBUGCHK 0

#define DEBUG(x,y)	if (!DEBUGCHK) \
				{x;} \
				else \
				{y;}

float ffSumaSeries(const int n);
float ffPares(const int i);
float ffImpares(const int i);

int main(int argn, char *argv[])
{
	int iN;
	int iFin = 0;

	while (!iFin)
	{
		fflush(stdin);
		printf("Escribe el numero de terminos de la suma:");
		printf("\n >> ");
		DEBUG(
				scanf("%d", &iN),
				iN = 5)
		printf("El resultado de la serie alternada: ");
		printf("\n >> %f", ffSumaSeries(iN));

		char sSig;
		printf("\n ");
		printf("\n ¿Quieres seguir? (S/N)");
		fflush(stdin);
		printf("\n >> ");
		DEBUG(scanf("%c", &sSig), sSig = 'N')
		switch(sSig)
		{
			case 'N': case 'n': iFin = 1; break;
			case 'S': case 's': system("cls"); break;
			default : break;
		}
	}
	printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}

float ffSumaSeries(const int n)
{
	float fResult;

	if ( n%2 == 0) //es par//
	{	fResult = ffPares(n);	}
	else //es impar//
	{	fResult = ffImpares(n);	}
	return fResult;
}

float ffPares(const int i)
{
	if (i == 2)
	{
		return -1.0/2.0;
	}
	else
	{
		return (-1.0/((float) i) + ffImpares(i-1));
	}
}

float ffImpares(const int i)
{
	if (i == 1)
	{
		return 1.0;
	}
	else
	{
		return ( 1.0/((float)i) + ffPares(i-1) );
	}
}

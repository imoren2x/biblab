/*
 ============================================================================
 Name        : Factorial.c
 Author      : imoren2x
 Version     :
 Copyright   :
 Description :
 	Escribir una funci�n recursiva para calcular el factorial de un
 	n�mero natural n. Emplear el tipo unsigned long int. Comprobar su
 	funcionamiento calculando los factoriales de 0, 1, 2, 3, 4 y 5.
 	 	 �Qu� ocurre al tratar de calcular el factorial de 14? �Podr�a calcularse
 	 	 el factorial de 14 con una versi�n iterativa?
 	 	 �C�mo se podr�a modificar la funci�n para poder calcular el factorial
 	 	 de n�meros naturales mayores o iguales a 14?
	Para realizar este ejercicio se sugiere usar la librer�a climits de C++
	para imprimir por pantalla el valor m�ximo que puede asign�rsele a un
	n�mero natural largo. Para ello, debe imprimirse por pantalla la constante
	ULONG_MAX de dicha librer�a.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>//contains ULONG_MAX constant//
#include <assert.h>

int fFactorialRecurr(const int n);
int fFactorialIterat(const int n);

int main( int argn, char *argv[])
{
	int iN;
	//Usando punteros a funciones//
	int (*pfr)(const int); //Definicion puntero a funcion
	int (*pfi)(const int); //Definicion puntero a funcion

	etiqueta:
	printf("\n Introduzca el numero natural n (numero mayor representable: %u):", ULONG_MAX);
	printf("\n >>");
	scanf("%d", &iN);

	assert(iN > 0); //Error si n�mero negativo// //ahorra un bucle if//

	pfr = (int (*)(const int)) fFactorialRecurr(iN);
	pfi = (int (*)(const int)) fFactorialIterat(iN);
	printf("\n Factorial Recursivo: \t\t%d", fFactorialRecurr(iN));
	printf("\n Factorial Iterativo: \t\t%d", fFactorialIterat(iN));
	printf("\n Factorial ptr a func (Recur): \t%d", (int)(*pfr));//usando punteros//
	printf("\n Factorial ptr a func (Iter): \t%d", (int)(*pfi));//usando punteros//

	char sSig;
	printf("\n ");
	printf("\n \aQuieres seguir? (S/N)");
	fflush(stdin);
	printf("\n >> ");
	scanf("%c", &sSig);
	//printf("\n %c", sSig);
	switch(sSig)
	{
	case 'S': case 's': system("cls"); goto etiqueta; break;
	default : break;
	}

	system("pause");
	return EXIT_SUCCESS;
}

int fFactorialRecurr(const int n)
{
	//int result = 0;
	//caso base//
	if ( n == 0)
	{
		return 1;
	}
	else
	{
		return n*fFactorialRecurr(n-1);
	}

}

int fFactorialIterat(const int n)
{
	int iI;
	int iN = 1;

	for (iI = n; iI >= 1; iI--)
	{
		iN *= iI;
	}

	return iN;
}

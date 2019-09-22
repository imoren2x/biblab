/**
 ============================================================================
 Name        : 6_Ackerman.c
 Author      : imoren2x
 Version     :
 Copyright   : Your copyright notice
 Description :
	La función de Ackerman se define para dos valores naturales dados m y n
	como sigue:
		Ackerman(0, n) = n + 1
		Ackerman(m, 0) = Ackerman(m - 1, 1)
		Ackerman(m, n) = Ackerman(m - 1, Ackerman(m, n - 1))
	Se trata de un ejemplo muy conocido de función recursiva no primitiva
	(la función aparece como argumento de sí misma). Escribir una función
	recursiva para calcular la función de Ackerman. Comprobar su
	funcionamiento calculando los siguientes valores:
	Ackerman(1,1)= 3, Ackerman(2,1)= 5, Ackerman(3,3)= 61,
	Ackerman(3,5)= 253. ¿Qué ocurre al intentar calcular Ackerman(5,1)?
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define DEBUGCHK 0

#define DEBUG(x,y)	if (!DEBUGCHK) \
				{x;} \
				else \
				{y;}

int ifAckerman(const int m, const int n);

int main(void)
{
	int iN, iN2;
	int iFin = 0;

	while (!iFin)
	{
		fflush(stdin);
		printf("Escribe los argumentos de la funcion de Ackerman (p.ej., 4 5):");
		printf("\n >> ");
		DEBUG(
				scanf("%d %d", &iN, &iN2),
				iN = 0; iN2 = 2)
		printf("El resultado es: ");
		printf("\n >> %d", ifAckerman(iN, iN2));

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

int ifAckerman(const int m, const int n)
{
	if ( m == 0 )
	{
		return n+1;
	}
	else if ( n == 0)
	{
		return ifAckerman(m-1, 1);
	}
	else
	{
		return ifAckerman(m-1, ifAckerman(m, n - 1) );
	}
}

/*
 ============================================================================
 Name        : FibonacciPtrToFun.c
 Author      : imoren2x
 Date		 : 2010-11-15, monday
 Version     :
 Copyright   : Your copyright notice
 Description : This program implements Fibonacci algorithm using iterative
 	 	 	 	 approach and recursive approach. It uses pointers to function
 	 	 	 	 to resolve which algorithm is preferred.
 ============================================================================
 */
/** Fibonacci algorithm
    F(0) = 0;
    F(1) = 1;
    F(n) = F(n-1) + F(n-2);
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

typedef enum{recursivo, iterativo} e_recite_t;

//Fibonacci functions
//	Función que usa punteros a funciones para llamar a las dos formas de Fibonacci.
//	Puntero a función que tiene un argumento const int y devuelve un int.
int pf_fibonacci(int (*f)(const int n), const int n);
//Fibonacci recursivo
int f_fibonacci_rec(const int n);
//Fibonacci iterativo
int f_fibonacci_ite(const int n);


int main(int argc, char *argv[])
{
	int i_orden, i_recite;
//	int (*g)(int n);
//	g = (int(*)(int))(f_fibonacci_ite(7));
//	printf("\n \t %d", (int)(*g));
//	int a = (int)(*g);

	fflush(stdin);
	printf("\n Escribe el orden de la sucesion de Fibonacci: ");
	printf("\n >> ");
	scanf("%d", &i_orden);
	printf("\n Recursiva o iterativa? (1 o 2): ");
	printf("\n >> ");
	scanf("%d", &i_recite);

	if (i_recite == 1)//(tolower(i_recite) == (int)'r')
	{
		//Llamada a función Fibonacci con puntero a función
		//	NO olvidar hacer el casting (int (*)(const int))
		int result = pf_fibonacci((int (*)(const int )) f_fibonacci_rec, i_orden);
		printf("%d", result);
	}
	else if (i_recite == 2)//(tolower(i_recite) == (int)'s')
	{
		//Llamada a función Fibonacci con puntero a función
		//	NO olvidar hacer el casting (int (*)(const int))
		int result = pf_fibonacci((int (*)(const int)) f_fibonacci_ite, i_orden);
		printf("\n %d", result );
	}
	else
	{
		printf("[ERROR] Ha habido un error!");
	}

//Version antigua que mostraba una tabla con los datos de la sucesion de Fibonacci.
//	int i_i = 0;
//	for (i_i = 0; i_i <= i_orden; i_i++)
//	{
//		printf("\n");
//		printf("%d \t | ", i_i);
//		//printf("%d", pf_fibonacci(const e_recite_t n, int (*f)(const int n)));
//	}

	printf("\n \n");
	system("PAUSE");
	return 0;
}

int pf_fibonacci(int (*f)(const int fn), const int n)
{
	return (*f)(n);
}

int f_fibonacci_rec(const int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return f_fibonacci_rec(n-1) + f_fibonacci_rec(n-2);
	}
}

/**
F(n) = 1/sqrt(5) ( alfa^n + beta^n )
    alfa = (1 + sqrt(5))/2
    beta = (1 - sqrt(5))/2
*/

int f_fibonacci_ite(const int n)
{
	int i_i = 0; //F(0) = 0
	int i_j = 1; //F(1) = 1
	int i_result = i_i;

	if (n > 0)
	{
		int i_index;
		for (i_index = 1; i_index < n; i_index++)
		{
			i_result = i_i + i_j; //F(n) = F(n-1) + F(n-2)
			i_i = i_j;
			i_j = i_result;
		}
	}
	else
	{
		return 0;
	}

	return i_result;
}

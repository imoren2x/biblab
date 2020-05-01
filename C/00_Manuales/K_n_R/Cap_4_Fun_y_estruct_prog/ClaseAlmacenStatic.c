/*
 ============================================================================
 Name        : ClaseAlmacenStatic.c
 Author      : imoren2x
 Version     :
 Copyright   : Your copyright notice
 Description : This C project practices with storage type 'static', which
 	 	 	 	 reserves a fixed memory space for variables and functions.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 5

int function1();
static int function2();
int function3();

int main(void)
{
	int i;

	for (i = 0; i < LIMIT; i++)
	{
		printf("Llamada: %d: ", i);
		printf("\t %d ", function1());
		printf("\t %d ", function2());
		printf("\t %d ", function3());
		printf("\n");
	}

	printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}

int function1()
{
	static int x = 10;
	x++;

	return x;
}

static int function2()
{
	int x = 5;
	x++;

	return x;
}

int function3()
{
	int x = 3;
	x++;
	return x;
}

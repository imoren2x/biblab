/*
 * f_llamante.c
 *
 *  Created on: 14/11/2010
 *      Author: imoren2x
 */

#include <stdio.h>
#include <stdlib.h>

#define INDEX 5

int x=100; // Declaración e inicialización

extern int funcion(); // extern por defecto
extern int funcion2(); // extern por defecto

int main()
{
	int index = 0;
	printf("\n %d", funcion());

	for (index = 0; index < INDEX; index++)
	{
		printf("\n %d \n", funcion2());
	}


	printf("\n");
	system("pause");
	return 0;
}

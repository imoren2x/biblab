/*
 ============================================================================
 Name        : ArgPrompt.c
 Author      : imoren2x
 Version     :
 Copyright   : Your copyright notice
 Description : This program practices with arguments in prompt
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	printf("\n El numero de parametros del comando es: %d", argc);
	int iI;
	for (iI = 0; iI < argc; iI++)
	{
		printf("\n Argumento numero %d: %s", iI, argv[iI]);
	}

	printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}

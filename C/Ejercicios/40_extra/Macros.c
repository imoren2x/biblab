/*
 ============================================================================
 Name        : Macros.c
 Author      : imoren2x
 Version     :
 Description : This example shows all posibilities you can do with 'macros', or
 	 	 	 	 define sentences.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HELLO printf("hello!")
#define HELLO2 printf("Hello "); \
	printf("\n on several lines!")
//How to show a variable debugging//
#define dprintf(expr) printf("\n" #expr ": = %d\n", expr)

int main(void) {

	HELLO;
	printf("\n ");
	HELLO2;

	int x = 5;

	dprintf(x);

	printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}

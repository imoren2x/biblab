/*
 ============================================================================
 Name        : FibonacciInOut.c
 Author      : imoren2x
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char *string;

extern int f_fibonacci_ite(const int n);
extern int f_fibonacci_rec(const int n);

int main(int argc, char *argv[])
{
	int n;
	string s = (string)malloc(15*sizeof(char));

	fflush(stdin);
	printf("\n Write order of the Fibonacci sequence: ");
	printf("\n >> ");
	scanf("%d", &n);
	printf("\n Recursive or iterative solution?: ");
	printf("\n >> ");
	scanf("%s", s);

	if ( strcmp(s, "iterative") == 0 )
	{
		printf("\n Solution: %d", f_fibonacci_ite(n));
	}
	else if ( strcmp(s, "recursive") == 0 )
	{
		//system("pause");
		printf("\n Solution: %d", f_fibonacci_rec(n));
	}
	else
	{
		printf("[ERROR]");
	}

	printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}

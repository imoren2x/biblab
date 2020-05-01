/*
 ============================================================================
 Name        : 01.c
 Author      : imoren2x
 Version     :
 Copyright   : Your copyright notice
 Description : Programme to get all characters and convert them into an integer
 	 	 	 	 It doesn't work because it doesn't discard the initial characters
 	 	 	 	 How can I clean the stdin buffer?
 ============================================================================
 */
//Hacer que funcione el programita de conversión de char a int//
//NOTA: usar el debugger, que está mu bien//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Global declarations
int getch(void);
void ungetch(int);

// Constants

// Program main

int main()
{
 // variables
 int i;
 char c;
 char *ptr;

 // body
 fflush(stdin);
 printf("Write a number:\n");
 printf(">> ");
 ptr = (char*)malloc(sizeof(char));
 scanf("%c", &c);
 printf("%c",c);
 //atoi function using variables
 i = atoi(&c);
 printf("\n\n");
 printf("And the number written is: \n >> %d", i);
 //atoi function using pointers
 *ptr = c;
 i = atoi(ptr);
 printf("\n");
 printf("And the number written (using pointers) is: \n >> %d", i);

 printf("\n\n");
 system("pause");

 return 0;
}

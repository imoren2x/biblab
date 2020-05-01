// Chapter 5 exercise 01 //
///////////////////////////
// Programme that changes two values defined as pointer to integer

// Inclusions list
#include <stdio.h>

// Macro-commands

// Global declarations

// function
void myswap(int *px, int *py);

// Program main
int main()
{
 //variables
 char c;
 int *p1, *p2;
 int i1, i2;
 
 //Modificar: crear función de captura: ahorra líneas//
 // body
 printf("Escribe un valor entero:\n");
 printf(">> ");
 p1 = (int*)malloc(sizeof(int));
 scanf("%d",p1);
 printf("Escribe el otro valor entero:\n");
 printf(">> ");
 p2 = (int*)malloc(sizeof(int));
 scanf("%d",p2);
 
 printf(" El primer valor es: %d.\n",*p1);
 printf(" El segundo valor es: %d.\n",*p2);
 
 printf("\n\n");
 printf("Y ahora los intercambio...\n");
 myswap(p1, p2);
 
 printf(" El primer valor es: %d.\n",*p1);
 printf(" El segundo valor es: %d.\n",*p2);
 
 // Freeing memory //
 free(p1);
 free(p2);
 
 printf("\n");
 system("pause");
 return 0;
}

void myswap(int *px, int *py)
{
 int temp;
 
 temp = *px;
 *px = *py,
 *py = temp;
}

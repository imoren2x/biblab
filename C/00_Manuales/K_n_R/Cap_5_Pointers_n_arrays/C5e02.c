// Chapter 5 exercise 02
////////////////////////////
// Programme that changes two values defined as integers

// Inclusions list
#include <stdio.h>

// Macro-commands

// Global declarations

// function
void myswap(int *px, int *py);
void myswap2(int *px, int *py);

// Program main
int main()
{
 // variables
 char c;
 int i1, i2, c1;
 int *px = (int *) malloc(sizeof(int)), *py = (int *) malloc(sizeof(int));
 
 // body
 printf("Escribe un valor entero:\n");
 printf(">> ");
 scanf("%d",&i1);
 printf("Escribe el otro valor entero:\n");
 printf(">> ");
 scanf("%d",&i2);
 
 printf(" El primer valor es: %d.\n",i1);
 printf(" El segundo valor es: %d.\n",i2);
 
 printf("\n\n");
 printf("Y ahora los intercambio...\n");
 myswap(&i1, &i2);

 *px = i1;
 *py = i2;
 myswap2(px,py);
 printf("\n Con punteros: %d y %d.",*px,*py);
 
 printf(" El primer valor es: %d.\n",i1);
 printf(" El segundo valor es: %d.\n",i2);
 
 printf("\n\n");
 printf("Y ahora sumo una constante a los valores integer\n");
 printf("Escribe el incremento en el primer entero:\n");
 printf(">> ");
 scanf("%d",&c1);
 i1 += c1;
 printf("\n");
 printf("\nY el resultado es: %d", i1);
 
 
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

void myswap2(int *px, int *py)
{
 int *temp;
 
 temp = px;
 px = py,
 py = temp;
}

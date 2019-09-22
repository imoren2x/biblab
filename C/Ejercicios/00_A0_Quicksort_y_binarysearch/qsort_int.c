/**
 * Implementación del algoritmo quick-sort para la ordenación de vectores
 * y bsearch para buscar ciertos elementos
 */

#include <stdlib.h>
#include <stdio.h>

#define LENGTH 100

/* Prototipo de la función de comparar */
int comparar(const void *arg1, const void *arg2) {
 if (*(int *)arg1 < *(int *)arg2) return -1;
 else if (*(int *)arg1 > *(int *)arg2) return 1;
 else return 0;
}

void print_list(const int *lista, const int size) {

   printf("Lista: ");
   for(int i = 0; i < size; i++) {
       printf("%d ", lista[i]);
   }
   printf("\n");
}

int main() {
   int i, num;
   int lista[LENGTH];
   int *ptr_elem;

   /* Fill the list with random elements */
   for(i = 0; i < LENGTH; i++) {
       lista[i] = rand() % 100 + 1;
   }

   //Print list before sorting
   printf("\n");
   printf("Before sorting.\n");
   print_list(lista, LENGTH);

   /* Quick-Sort */
   qsort(lista, LENGTH, sizeof(lista[0]), comparar);

   //Print list after sorting
   printf("\n");
   printf("After sorting.\n");
   print_list(lista, LENGTH);

   /* Ahora busquemos algunos elementos en la lista */
   printf("\n");
   puts( "Write a number to find it in sorted list\n (negative number to quit):" );
   scanf( "%d", &num );
   while( num >= 0 ) {
      ptr_elem = (int*)bsearch( &num, lista, LENGTH, sizeof(lista[0]), comparar );

      if ( ptr_elem != NULL )
          printf( "Encontrado: %d\n", *ptr_elem );
      else
          printf( "No encontrado: %d\n", num );

      scanf( "%d", &num );
   }

   return 0;
}

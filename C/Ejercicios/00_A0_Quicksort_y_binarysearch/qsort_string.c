/**
 * Implementación del algoritmo quick-sort para la ordenación de vectores
 * y bsearch para buscar ciertos elementos
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define LENGTH 4

/* http://www.anyexample.com/programming/c/qsort__sorting_array_of_strings__integers_and_structs.xml
 */

/* Prototipo de la función de comparar */
int comparar(const void *arg1, const void *arg2) {

    //Hacer tolower para hacer la comparacion justa
    int result = strcmp(*(const char **)arg1, *(const char **)arg2);

    printf("arg1: %s\n", *(const char **)arg1);
    printf("arg2: %s\n", *(const char **)arg2);
    printf("result: %d\n", result);

    return result;
}

void print_list(char *lista[], int size) {

   printf("Lista: ");
   for(int i = 0; i < size; i++) {
       printf("%s ", lista[i]);
   }
   printf("\n");
}

int main() {
   int i, num;
   char* lista[LENGTH] = {"Natalia", "Ignacio", "Manuel", "Maria Jose"};
   int *ptr_elem;

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
//    printf("\n");
//    puts( "Write a number to find it in sorted list\n (negative number to quit):" );
//    scanf( "%d", &num );
//    while( num >= 0 ) {
//       ptr_elem = (int*)bsearch( &num, lista, LENGTH, sizeof(lista[0]), comparar );
//
//       if ( ptr_elem != NULL )
//           printf( "Encontrado: %d\n", *ptr_elem );
//       else
//           printf( "No encontrado: %d\n", num );
//
//       scanf( "%d", &num );
//    }

   return 0;
}

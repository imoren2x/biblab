#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**

 * void *memmove(void *s1, const void *s2, size_t n);
 *
 * Copia los primeros n caracteres del objeto apuntado por
 * s2 al objeto apuntado por s1.Sin embargo, se asegura
 * de que no estén superpuestos. Por esta razón, copia
 * los caracteres a un array/arreglo temporalmente.
 * Después vuelve a copiar del array temporal al
 * objeto en cuestión.
 *
 * Valor de retorno:
 *  La función retorna el valor de s1.
 *
 */

int main() {
   char a[8] = "abcdefg";
   char *ptr = (char *) calloc( 8, sizeof(char) );
   int i;

   memmove( ptr, a, 5 );
   for( i=0; i<7; i++ )
     printf( "a[%d]=%c ", i, a[i] );
   printf( "\n" );
   for( i=0; i<5; i++ )
     printf( "ptr[%d]=%c ", i, ptr[i] );
   printf( "\n" );
   free(ptr);

   return 0;
}
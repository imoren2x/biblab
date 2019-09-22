#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * void *memset(void *s, int c, size_t n);
 *
 *  Copia el valor de c (convertido a unsigned char) en
 * cada uno de los primeros n caracteres en el objeto
 * apuntado por s.
 *
 */

int main() {
   char c = 'F';
   char *s;
   int i;

   s = (char*) malloc( 5 * sizeof(char) );
   memset( s, c, 5 );
   for( i = 0; i < 5; i++ )
     printf( "c[%d]=%c ", i, c );
   printf( "\n" );
   free(s);
   return 0;
}
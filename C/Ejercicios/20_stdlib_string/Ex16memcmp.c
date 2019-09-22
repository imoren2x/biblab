#include <stdio.h>
#include <string.h>

/**
 * int memcmp(const void *s1, const void *s2, size_t n);
 *
 *  Compara los primeros n caracteres del objeto apuntado por
 * s1 (interpretado como unsigned char) con los primeros n
 * caracteres del objeto apuntado por s2 (interpretado como
 * unsigned char).
 *
 * Retorno:
 * La función retorna un número entero mayor, igual,
 *  o menor que cero, apropiadamente según el objeto apuntado
 *  por s1 es mayor, igual, o menor que el objeto apuntado
 *  por s2.
 *
 */


int main() {
   char a[3] = { 82, 81, 84 };
   char b[3] = { 85, 83, 86 };
   int i;

   for( i=0; i<3; i++ )
     printf( "a[%d]=%c ", i, a[i] );
   printf( "\n" );
   for( i=0; i<3; i++ )
     printf( "b[%d]=%c ", i, b[i] );
   printf( "\n" );

   i = memcmp( a, b, 4 );
   printf( "a es " );
   if( i < 0 )  printf( "menor que" );
   else if( i > 0 )  printf( "mayor que" );
   else  printf( "igual a" );
   printf( " b\n" );

   return 0;
}
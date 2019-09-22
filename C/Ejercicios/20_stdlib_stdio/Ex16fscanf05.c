
#include <stdio.h>
#include <string.h>

/**
 * Conjunto de B�squeda
 [caracteres a buscar] 	Busca en una cadena de caracteres un conjunto de caracteres que est�n guardados en un array
 *
 */

int main(  ) {
   char cadena[80], temp[80];

   printf( "Escribe una palabra, que empiece por una vocal: " );
   scanf( "%[aeiou]", cadena );

   scanf( "%s", temp );    /* Recoger los caracteres restantes */

   printf( "\\nS�lo se ha recogido las primeras letras que sean vocales: \\\"%s\\\"\\n", cadena );

   printf( "Escribe otra palabra, que empiece por una consonante (no son vocales): " );
   scanf( "%[^aeiou]", cadena );

   printf( "\\nS�lo se ha recogido las primeras letras que no sean vocales: \\\"%s\\\"\\n", cadena );

   return 0;
}
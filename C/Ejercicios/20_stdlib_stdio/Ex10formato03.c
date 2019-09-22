#include <stdio.h>
#include <string.h>

/**
 *
 Caracteres y Cadenas c 	Lee un carácter. El argumento correspondiente es un puntero a char, ningún nulo ('\0') es añadido
s 	Lee una cadena de caracteres. El argumento correspondiente es un puntero a una array de tipo char que es suficientemente grande para guardar la cadena y un carácter nulo ('\0') final
 */


int main() {
   char c, cadena[80];

   printf( "Introduce un carácter: " );
   scanf( "%c", &c );

   printf( "Introduce una cadena de caracteres (sin espacios): " );
   scanf( "%s", cadena );

   printf( "\nHas introducido: " );
   printf( "\'%c\' \"%s\" (%d caracteres)\n", c, cadena, strlen(cadena) );

   return 0;
}

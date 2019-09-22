#include <stdio.h>
#include <string.h>

/**
 *
 Caracteres y Cadenas c 	Lee un car�cter. El argumento correspondiente es un puntero a char, ning�n nulo ('\0') es a�adido
s 	Lee una cadena de caracteres. El argumento correspondiente es un puntero a una array de tipo char que es suficientemente grande para guardar la cadena y un car�cter nulo ('\0') final
 */


int main() {
   char c, cadena[80];

   printf( "Introduce un car�cter: " );
   scanf( "%c", &c );

   printf( "Introduce una cadena de caracteres (sin espacios): " );
   scanf( "%s", cadena );

   printf( "\nHas introducido: " );
   printf( "\'%c\' \"%s\" (%d caracteres)\n", c, cadena, strlen(cadena) );

   return 0;
}

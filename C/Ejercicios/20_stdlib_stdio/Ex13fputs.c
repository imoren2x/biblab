#include <stdio.h>

/**
 * Funci�n fputs ANSI C
 * int fputs(const char *cadena, FILE *stream);
 *
 * Esta funci�n escribe la cadena apuntada por cadena al
 *  stream apuntado por stream. El car�cter nulo no es escrito.
 *
 * Valor de retorno:
 *  La funci�n fputs retorna EOF si ocurre un error de
 * escritura, si no, entonces retorna un valor no negativo.
 */

int main( ) {
   char nombre[11] = "datos2.dat";
   FILE *fichero;

   fichero = fopen( nombre, "w" );
   printf( "Fichero: %s -> ", nombre );
   if ( fichero )
      printf( "creado (ABIERTO)\n" );
   else {
      printf( "Error (NO ABIERTO)\n" );
      return 1;
   }

   fputs( "Esto es un ejemplo usando \'fputs\'\n", fichero );

   if( !fclose(fichero) )
      printf( "\nFichero cerrado\n" );
   else {
      printf( "\nError: fichero NO CERRADO\n" );
      return 1;
   }

   return 0;
}

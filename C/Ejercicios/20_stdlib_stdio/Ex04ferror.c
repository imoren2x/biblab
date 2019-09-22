#include <stdio.h>

/**
 * Función ferror ANSI C
 *  int ferror(FILE *stream);
 *
 * La función ferror comprueba el indicador de errores
 *   para el stream apuntado por stream.
 *
 * Valor de retorno:
 *
 *  La función ferror retorna un valor distinto a cero
 *   si y sólo si el indicador de errores está activado
 *   para stream.
 *
 * Vease: clearerr
 */

int main( void ) {
   char c='z';
   char nombre[11] = "datos2.dat";
   FILE *fichero;

   fichero = fopen(nombre, "r");
   if ( NULL == fichero )
      printf( "ERROR: No se pudo abrir el fichero, %s\n",
		nombre );

   int result = fputc( c, fichero );
   if ( result == EOF )
		printf( "fputc => Error\n" );    /* Creamos un error */
   else
		printf( "Caracter: %c, se ha escrito en el fichero: %s\n",
		c, nombre );    /* No se dará el caso */

   if ( ferror(fichero) ) {
      printf( "Se han encontrado errores al realizar una operacion con el fichero, %s.\n",
	  nombre );
      clearerr( fichero );
      printf( "Los errores han sido despejado para el stream.\n" );
   } else
	  printf( "No hubo errores con el fichero: %s\n", nombre );    /* Tampoco se dará el caso */

   fclose( fichero );

   return 0;
}
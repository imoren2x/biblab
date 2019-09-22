#include <stdio.h>

/**
 * void clearerr(FILE *stream);
 *
 * La función clearerr despeja los indicadores de final
 *  de fichero y de posición de fichero para el stream
 *  apuntado por stream al comienzo del fichero.
 *
 * Valor de retorno:
 * 	La función clearerr no retorna ningún valor.
 */
int main( void ) {
   char c = 'z';
   char nombre[11] = "datos2.dat";
   FILE *fichero;

   if( NULL == (fichero = fopen(nombre, "r")) )
      printf( "ERROR: No se pudo abrir el fichero, %s\n", fichero );

   if( EOF == fputc( c, fichero ) )
		printf( "fputc => Error\n" );    /* Creamos un error */
   else
		printf(
			"Caracter: %c, se ha escrito en el fichero: %s\n",
			c,
			nombre );    /* No se dará el caso */

   if( ferror(fichero) ) {
		printf( "Se han encontrado errores al realizar una operacion con el fichero, %s.\n", nombre );
		clearerr( fichero );
		printf( "Los errores han sido despejado para el stream.\n" );
   } else
		//printf( "No hubo errores con el fichero: %s\n", nombre );    /* Tampoco se dará el caso */

   fclose( fichero );

   return 0;
}

#include <stdio.h>

/**
 * void clearerr(FILE *stream);
 *
 * La funci�n clearerr despeja los indicadores de final
 *  de fichero y de posici�n de fichero para el stream
 *  apuntado por stream al comienzo del fichero.
 *
 * Valor de retorno:
 * 	La funci�n clearerr no retorna ning�n valor.
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
			nombre );    /* No se dar� el caso */

   if( ferror(fichero) ) {
		printf( "Se han encontrado errores al realizar una operacion con el fichero, %s.\n", nombre );
		clearerr( fichero );
		printf( "Los errores han sido despejado para el stream.\n" );
   } else
		//printf( "No hubo errores con el fichero: %s\n", nombre );    /* Tampoco se dar� el caso */

   fclose( fichero );

   return 0;
}

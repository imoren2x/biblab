#include <stdio.h>

/**
 * int fclose(FILE *stream)
 *
 * El stream apuntado por stream será despejado y el
 *  fichero asociado, cerrado. Cualquier dato almacenado
 *  aún sin escribir para el stream será enviado al entorno
 *  local para ser escritos al fichero; cualquier dato
 *  almacenado aún sin leer será descartado. El stream es
 *  desasociado del fichero. Si el almacenamiento asociado
 *  fue automáticamente adjudicado, será desadjudicado.
 *
 * Valor de retorno:
 *	La función fclose retorna cero si el stream fue
 *    cerrado con éxito. Si se detectaron errores,
 *    entonces retorna EOF.
 */

int main() {
   FILE *fichero;
   char nombre[10] = "datos.dat";

   fichero = fopen( nombre, "w" );
   printf( "Fichero: %s -> ", nombre );
   if( fichero )
	printf( "creado (ABIERTO)\n" );
   else {
	printf( "Error (NO ABIERTO)\n" );
	return 1;
   }

   if ( !fclose(fichero) )
      printf( "Fichero cerrado\n" );
   else {
      printf( "Error: fichero NO CERRADO\n" );
      return 1;
   }

   return 0;
}
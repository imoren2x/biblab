#include <stdio.h>

/**
 * Función fgetc ANSI C
 *  int fgetc(FILE *stream)
 *
 *  Esta función obtiene el carácter siguiente (si está presente)
 *   como un unsigned char convertido a int, desde el stream de
 *   entrada apuntado por stream, y avanza el indicador de posición
 *   de ficheros asociado al stream (si está definido).
 *
 * Valor de retorno:
 *  La función fgetc retorna el carácter siguiente desde el
 *   stream de entrada apuntado por stream. Si el stream está
 *   en el final de fichero, el indicador del final de fichero
 *   para el stream es activado y fgetc retorna EOF. Si ocurre
 *   un error de lectura, el indicador de error para el stream
 *   es activado y fgetc retorna EOF.
 *
 */

int main() {
   char nombre[10] = "datos.dat";
   FILE *fichero;
   int i;

   fichero = fopen( nombre, "r" );
   printf( "Fichero: %s -> ", nombre );
   if ( fichero )
      printf( "existe (ABIERTO)\n" );
   else {
      printf( "Error (NO ABIERTO)\n" );
      return 1;
   }

   printf( "Los 18 primeros caracteres del fichero: %s\n\n",
	nombre );
   //printf( "%d", 17 <= 18);
   for ( i=1; i <= 18; i++ )
	printf( "%c", fgetc(fichero) );

   printf( "\n\n Los 18 segundos caracteres del fichero: %s\n\n",
	nombre );
   char str[19];
   for ( i=0; i <= 17; i++ ) {
    str[i] = fgetc(fichero);
   }
   str[i] = '\0';
   printf( "%s", str );


   if ( !fclose(fichero) )
      printf( "\n\n\nFichero cerrado\n" );
   else {
      printf( "\nError: fichero NO CERRADO\n" );
      return 1;
   }

   return 0;
}

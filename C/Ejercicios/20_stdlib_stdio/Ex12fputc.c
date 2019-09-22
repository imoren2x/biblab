#include <stdio.h>

/**
 *
 * Funci�n fputc ANSI C
 *	int fputc(int c, FILE *stream);
 *
 * Esta funci�n escribe el car�cter indicado por c
 *  (convertido a un unsigned char) al stream de salida
 *  apuntado por stream, en la posici�n indicada por el
 *  indicador de posici�n de ficheros asociado al stream
 *  (si est� definido), y avanza el indicador apropiadamente.
 *  Si el fichero no soporta peticiones de posici�n, o si el
 *  stream fue abierto con el modo de a�ado, el car�cter
 *  es a�adido al stream de salida.
 *
 * Valor de retorno:
 * La funci�n fputc retorna el car�cter escrito. Si ocurre
 *  un error de escritura, el indicador de error para el
 *  stream es activado y fputc retorna EOF.
 *
 */

int main() {
   char nombre[10] = "datos.dat";
   FILE *fichero;
   int i;

   fichero = fopen( nombre, "a" );
   printf( "Fichero: %s -> ", nombre );
   if ( fichero )
      printf( "existe o ha sido creado (ABIERTO)\n" );
   else {
      printf( "Error (NO ABIERTO)\n" );
      return 1;
   }

   printf( "Escribimos las 18 primeras letras del abecedario ingles en el fichero: %s\n\n", nombre );
   for( i=0; i < 18; i++)
		printf( "%c", fputc('a'+i, fichero) );

   if ( !fclose(fichero) )
      printf( "\nFichero cerrado\n" );
   else {
      printf( "\nError: fichero NO CERRADO\n" );
      return 1;
   }

   return 0;
}

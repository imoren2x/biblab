#include <stdio.h>

/**
 *
 * Función fputc ANSI C
 *	int fputc(int c, FILE *stream);
 *
 * Esta función escribe el carácter indicado por c
 *  (convertido a un unsigned char) al stream de salida
 *  apuntado por stream, en la posición indicada por el
 *  indicador de posición de ficheros asociado al stream
 *  (si está definido), y avanza el indicador apropiadamente.
 *  Si el fichero no soporta peticiones de posición, o si el
 *  stream fue abierto con el modo de añado, el carácter
 *  es añadido al stream de salida.
 *
 * Valor de retorno:
 * La función fputc retorna el carácter escrito. Si ocurre
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

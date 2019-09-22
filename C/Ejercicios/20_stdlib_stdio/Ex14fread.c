#include <stdio.h>

/**
 * Función fread ANSI C
 * size_t fread(void *puntero, size_t tamanyo, size_t nmemb, FILE *stream);
 *
 * La función fread recibe, en el array apuntado por puntero,
 *  hasta nmemb de elementos cuyo tamaño es especificado por
 *  tamanyo, desde el stream apuntado por stream. El
 *  indicador de posición de ficheros para el stream (si
 *  está definido) es avanzado por el número de caracteres
 *  leídos correctamente. Si existe un error, el valor
 *  resultante del indicador de posición de ficheros para
 *  el stream es indeterminado. Si un elemento es
 *  parcialmente leído, entonces su valor es indeterminado.
 *
 * Valor de retorno:
 *  La función fread retorna el número de caracteres
 *   leídos correctamente, el cual puede ser menor que nmemb
 *   si se encuentra un error de lectura o un final de
 *   fichero. Si tamanyo o nmemb es cero, fread retorna
 *   cero, y el contenido del array y el estado del
 *   stream permanecen invariados.
 *
 */

int main( ) {
   FILE *fichero;
   char nombre[11] = "datos5.dat";
   unsigned int dinero[10] = { 23, 12, 45, 345, 512, 345, 654, 287, 567, 124 };
   unsigned int leer[10], i;

   fichero = fopen( nombre, "w+" );
   printf( "Fichero: %s -> ", nombre );
   if ( fichero )
      printf( "creado (ABIERTO)\n" );
   else {
      printf( "Error (NO ABIERTO)\n" );
      return 1;
   }

   printf( "Escribiendo cantidades:\n\n" );

   for ( i=0; i < 10; i++ )
     printf( "%d\t", dinero[i] );

   fwrite ( dinero, sizeof(unsigned int), 10, fichero );

   printf( "\nLeyendo los datos del fichero \"%s\":\n", nombre );
   rewind( fichero );
   fread( leer, sizeof(unsigned int), 10, fichero );

   for ( i = 0; i < 10; i++ )
     printf( "%d\t", leer[i] );

   if( !fclose(fichero) )
      printf( "\nFichero cerrado\n" );
   else {
      printf( "\nError: fichero NO CERRADO\n" );
      return 1;
   }

   return 0;
}

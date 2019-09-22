#include <stdio.h>

/**
 * Función fgets ANSI C
 *  char *fgets(char *cadena, int n, FILE *stream);
 *
 * Esta función lee como máximo uno menos que el número
 *  de caracteres indicado por n desde el stream apuntado
 *  por stream al array apuntado por cadena. Ningún carácter
 *  adicional es leído después del carácter de nueva línea
 *  (el cual es retenido) o después de un final de fichero
 *  (EOF).
 * Un carácter nulo es escrito inmediatamente después del
 *  último carácter leído en el array.
 *
 * Valor de retorno:
 * La función fgets retorna cadena si es realizada con éxito.
 *  Si un final de fichero (EOF) es encontrado y ningún
 *  carácter ha sido leído en el array, entonces el
 *  contenido del array permanece invariable y un puntero
 *  nulo es retornado. Si ocurre un error de lectura durante
 *  el proceso, el contenido del array es indeterminado y un
 *  puntero nulo es retornado.
 *
 */

int main() {
   char nombre[10] = "datos.dat",
   linea[81];
   FILE *fichero;

   fichero = fopen( nombre, "r" );
   printf( "Fichero: %s -> ", nombre );
   if ( fichero )
      printf( "existe (ABIERTO)\n" );
   else {
      printf( "Error (NO ABIERTO)\n" );
      return 1;
   }

   printf( "La primera linea del fichero: %s\n\n", nombre );
   printf( "%s\n", fgets(linea, 81, fichero) );

   printf( "La segunda linea del fichero: %s\n\n", nombre );
   printf( "%s\n", fgets(linea, 81, fichero) );

   if ( !fclose(fichero) )
      printf( "\nFichero cerrado\n" );
   else {
      printf( "\nError: fichero NO CERRADO\n" );
      return 1;
   }

   return 0;
}
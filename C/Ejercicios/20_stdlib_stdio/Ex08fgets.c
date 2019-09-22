#include <stdio.h>

/**
 * Funci�n fgets ANSI C
 *  char *fgets(char *cadena, int n, FILE *stream);
 *
 * Esta funci�n lee como m�ximo uno menos que el n�mero
 *  de caracteres indicado por n desde el stream apuntado
 *  por stream al array apuntado por cadena. Ning�n car�cter
 *  adicional es le�do despu�s del car�cter de nueva l�nea
 *  (el cual es retenido) o despu�s de un final de fichero
 *  (EOF).
 * Un car�cter nulo es escrito inmediatamente despu�s del
 *  �ltimo car�cter le�do en el array.
 *
 * Valor de retorno:
 * La funci�n fgets retorna cadena si es realizada con �xito.
 *  Si un final de fichero (EOF) es encontrado y ning�n
 *  car�cter ha sido le�do en el array, entonces el
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
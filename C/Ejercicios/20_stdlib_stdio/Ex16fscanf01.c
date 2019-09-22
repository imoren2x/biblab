#include <stdio.h>

/**
 * Funci�n fscanf ANSI C
 *  int fscanf(FILE *stream, const char *formato, ...);
 *
 * Esta funci�n recibe datos del stream apuntado por
 *  stream, bajo el control de la cadena apuntada por
 *  formato que especifica las secuencias de entrada
 *  permitadas y c�mo han de ser convertidas para la
 *  asignaci�n. Si hay argumentos insuficientes para el
 *  formato, el comportamiento no est� definido. Si el
 *  formato termina mientras quedan argumentos, los
 *  argumentos restantes son evaluados (como siempre)
 *  pero ignorados. La funci�n retorna control cuando
 *  el final de la cadena de formato es encontrado.
 *
 * Valor de retorno:
 * La funci�n fscanf retorna el n�mero de datos de
 *  entrada asignados, que puede ser menor que ofrecido,
 *  incluso cero, en el caso de un error de asignaci�n.
 * Si un error de entrada ocurre antes de cualquier
 *  conversi�n, la funci�n fscanf retorna el valor de
 *  la macro EOF.
 *
 */

int main() {
   FILE *fichero;
   char nombre[10] = "datos.dat";
   unsigned int i, x1, x2, x3, x4;

   fichero = fopen( nombre, "r" );
   printf( "Fichero: %s (para lectura) -> ", nombre );
   if ( fichero )
      printf( "existe (ABIERTO)\n" );
   else {
      printf( "Error (NO ABIERTO)\n" );
      return 1;
   }

   printf( "Datos leidos del fichero: %s\n", nombre );
   printf( "Esto es un ejemplo de usar la funcion \'fprintf\'\n" );
   printf( "\t 2\t 3\t 4\n" );
   printf( "x\tx\tx\tx\n\n" );

   fscanf( fichero, "Esto es un ejemplo de usar la funcion \'fprintf\'\n" );
   fscanf( fichero, "\t 2\t 3\t 4\n" );
   fscanf( fichero, "x\tx\tx\tx\n\n" );
   for ( i = 1; i <= 10; i++ ) {
      fscanf( fichero, "%d\t%d\t%d\t%d\n", &x1, &x2, &x3, &x4 );
      printf( "%d\t%d\t%d\t%d\n", x1, x2, x3, x4 );
   }

   if ( !fclose(fichero) )
      printf( "Fichero cerrado\n" );
   else {
      printf( "Error: fichero NO CERRADO\n" );
      return 1;
   }

   return 0;
}

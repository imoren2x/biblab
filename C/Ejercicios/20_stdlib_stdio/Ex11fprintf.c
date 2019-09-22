#include <stdio.h>

/**
 * Función fprintf ANSI C
 * int fprintf(FILE *stream, const char *formato, ...);
 *
 *  Esta función envía datos al stream apuntado por stream, bajo
 *   el control de la cadena apuntada por formato que
 *   especifica cómo los argumentos posteriores son
 *   convertidos para la salida. Si hay argumentos
 *   insuficientes para el formato, el comportamiento no
 *   está definido. Si el formato termina mientras quedan
 *   argumentos, los argumentos restantes son evaluados
 *   (como siempre) pero ignorados. La función retorna
 *   control cuando el final de la cadena de formato
 *   es encontrado.
 *
 * Valor de retorno:
 * La función fprintf retorna el número de caracteres
 *  transmitidos, o un valor negativo si un error de salida
 *  se ha producido.
 *
 */

int main() {
   FILE *fichero;
   char nombre[10] = "datos.dat";
   unsigned int i;

   fichero = fopen( nombre, "w" );
   printf( "Fichero: %s (para escritura) -> ", nombre );
   if( fichero )
      printf( "creado (ABIERTO)\n" );
   else {
      printf( "Error (NO ABIERTO)\n" );
      return 1;
   }

   fprintf( fichero, "Esto es un ejemplo de usar la funcion \'fprintf\'\n" );
   fprintf( fichero, "\t 2\t 3\t 4\n" );
   fprintf( fichero, "x\tx\tx\tx\n\n" );
   for( i=1; i <= 10; i++ )
      fprintf( fichero, "%d\t%d\t%d\t%d\n", i, i*i, i*i*i, i*i*i*i );

   fprintf( stdout, "Datos guardados en el fichero: %s\n", nombre );
   if ( !fclose(fichero) )
      printf( "Fichero cerrado\n" );
   else {
      printf( "Error: fichero NO CERRADO\n" );
      return 1;
   }

   return 0;
}

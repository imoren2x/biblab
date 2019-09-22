#include <stdio.h>


/**
 * Función freopen ANSI C
 * FILE *freopen(const char *nombre, const char *modo, FILE *stream);
 *
 * Abre un fichero cuyo nombre es la cadena apuntada por
 *  nombre y adjudica un stream a ello apuntado por stream.
 *  El argumento modo es usado tal como en la función fopen.
 *
 * La función freopen primeramente intenta cerrar cualquier
 *  fichero que es asociado con el stream especificado. El
 *  error de no cerrar el fichero con éxito es ignorado.
 *  Los indicadores de error y final de fichero EOF) para
 *  el stream son borrados.
 *
 * Valor de retorno:
 * La función freopen retorna un puntero nulo si el proceso
 *  de abertura falla. De no ser así, freopen retorna el
 *  valor de stream.
 */

int main() {
   FILE *fichero;
   char nombre[10] = "datos.dat";

   fichero = fopen( nombre, "w" );
   printf( "Fichero: %s (para escritura) -> ", nombre );
   if ( fichero )
      printf( "creado (ABIERTO)\n" );
   else {
      printf( "Error (NO ABIERTO)\n" );
      return 1;
   }

   printf( "Fichero: %s (para lectura) -> ", nombre );
   if ( freopen(nombre, "r", fichero) == NULL ) {
      printf( "Error (NO ABIERTO)\n" );
      return 1;
   } else printf( "listo para leer (ABIERTO)\n" );

   if ( !fclose(fichero) )
      printf( "Fichero cerrado\n" );
   else {
      printf( "Error: fichero NO CERRADO\n" );
      return 1;
   }

   return 0;
}

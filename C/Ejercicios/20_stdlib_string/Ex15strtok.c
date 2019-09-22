#include <stdio.h>
#include <string.h>

/**
 * Función strtok ANSI C
 *  Rompe la cadena s1 en segmentos o tókens. Esta ruptura
 * destruye s1, en el proceso. La forma de romper la cadena
 * depende de la secuencia de caracteres de la cadena s2. Estos
 * caracteres se denominan [caracteres] delimitadores. La
 * función recorrerá la cadena en busca de alguno de los
 * delimitadores de la cadena s2. Cuando lo encuentre, el
 * proceso se detiene, ya que tiene un token. Posteriores
 * llamadas a strtok romperán la cadena s1 en otros tókens.
 * Estas llamadas pueden tener otra secuencia de delimitadores.
 *
 * Valor de retorno:
 * La primera llamada a strtok determina la cadena a romper,
 * retornando el puntero al comienzo del primer token. Si se
 * recorrió la cadena s1 sin haber encontrado un delimitador,
 * y aún no se ha obtenido el primer token, entonces la
 * función retornará un puntero nulo.
 *
 *  Posteriores llamadas retornarán más tókens. Si ya no
 * encuentra más delimitadores, entonces retornará todos los
 * caracteres desde el último delimitador para ser el último
 * token. Si ya se retornó el último token, entonces retornará
 * un puntero nulo con demás llamadas a la función.
 *
 */

int main() {
   char s1[49] = "Esto es un ejemplo para usar la funcion strtok()";
   char s2[4] = " \n\t";
   char *ptr;

   printf( "\n s1 = %s\n\n", s1 );

   ptr = strtok( s1, s2 );    // Primera llamada => Primer token
   printf( "%s \t\t %s\n", ptr, s1 );
   while( (ptr = strtok( NULL, s2 )) != NULL )    // Posteriores llamadas
     printf( "%s \n", ptr);

   return 0;
}

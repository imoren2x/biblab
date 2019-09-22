#include <stdio.h>
#include <string.h>

/**
 * Funci�n strtok ANSI C
 *  Rompe la cadena s1 en segmentos o t�kens. Esta ruptura
 * destruye s1, en el proceso. La forma de romper la cadena
 * depende de la secuencia de caracteres de la cadena s2. Estos
 * caracteres se denominan [caracteres] delimitadores. La
 * funci�n recorrer� la cadena en busca de alguno de los
 * delimitadores de la cadena s2. Cuando lo encuentre, el
 * proceso se detiene, ya que tiene un token. Posteriores
 * llamadas a strtok romper�n la cadena s1 en otros t�kens.
 * Estas llamadas pueden tener otra secuencia de delimitadores.
 *
 * Valor de retorno:
 * La primera llamada a strtok determina la cadena a romper,
 * retornando el puntero al comienzo del primer token. Si se
 * recorri� la cadena s1 sin haber encontrado un delimitador,
 * y a�n no se ha obtenido el primer token, entonces la
 * funci�n retornar� un puntero nulo.
 *
 *  Posteriores llamadas retornar�n m�s t�kens. Si ya no
 * encuentra m�s delimitadores, entonces retornar� todos los
 * caracteres desde el �ltimo delimitador para ser el �ltimo
 * token. Si ya se retorn� el �ltimo token, entonces retornar�
 * un puntero nulo con dem�s llamadas a la funci�n.
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

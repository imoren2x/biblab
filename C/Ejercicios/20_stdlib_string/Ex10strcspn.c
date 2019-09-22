#include <stdio.h>
#include <string.h>

int main() {
   char s1[13] = "Hola a todos";
   char s2[5] = "abcd";

   printf( "s1=%s\n", s1 );
   printf( "s2=%s\n", s2 );
   printf( "La funcion retorna el numero de caracteres\n leidos de la subcadena hasta que halla alguno de los\n caracteres de s2. El caracter nulo no se cuenta.\n" );
   printf( "strcspn(s1,s2) = %d\n", strcspn( s1, s2 ) );

   return 0;
}
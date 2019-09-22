#include <stdio.h>
#include <string.h>

int main()
{
   char s1[13] = "Hola a todos";
   char s2[3] = "la";
   char *result = strstr( s1, s2 );

   printf("Localiza la primera aparicion en la cadena\n apuntada por s1 de la secuencia de caracteres\n (excluyendo el caracter nulo) en la cadena apuntada por s2.\n");

   printf("La funcion retorna un puntero a la cadena\n encontrada, o un puntero nulo si no se encontro la cadena.\n Si s2 apunta a una cadena de longitud cero, la función\n retorna s1.\n\n");

   printf( " s1 = %s\n", s1 );
   printf( " s2 = %s\n", s2 );
   printf( " strstr(s1,s2) = %s\n", result );

   return 0;
}
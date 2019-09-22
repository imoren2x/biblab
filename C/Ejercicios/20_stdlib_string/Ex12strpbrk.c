#include <stdio.h>
#include <string.h>

int main() {
   char s1[13] = "Hola a todos";
   char s2[5] = "deip";
   char *p = strpbrk( s1, s2 );

   printf( "s1 = %s\n", s1 );
   printf( "s2 = %s\n", s2 );

   printf( "\n Localiza la primera aparicion de la cadena\n apuntada por s1 de cualquier caracter de la cadena \n apuntada por s2." );
   printf( "\n La funcion retorna un puntero al caracter,\n o un puntero nulo si ningun caracter de s2 aparecio en s1.");
   printf( "\n strpbrk(s1,s2) = %s\n",  p);

   return 0;
}
#include <stdio.h>
#include <string.h>

int main(int argn, char* argv[]) {
   char s1[11] = "Hola ";
   char s2[7] = "amigos";

   printf( "\n s1=%s\t", s1 );
   printf( "\n s2=%s\n", s2 );

   strncat( s1, s2, 3 );
   printf( "\n s1=%s\n", s1 );

   return 0;
}
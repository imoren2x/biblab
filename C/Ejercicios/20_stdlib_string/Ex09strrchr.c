#include <stdio.h>
#include <string.h>

int main(int argn, char* argv[]) {
   char s[12] = "Hola amigos";
   char c = 'a';

   printf( "s=%s\t", s );
   printf( "c=%c\n", c );
   printf( "strrchr=%s\n", strrchr( s, c ) );

   return 0;
}
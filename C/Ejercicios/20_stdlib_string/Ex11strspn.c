#include <stdio.h>
#include <string.h>

#define LEN 256

int main( ) {
   char s1[LEN] = "129th";
   char s2[LEN] = "1342567890";

   printf( " s1 = %s\n", s1 );
   printf( " s2 = %s\n", s2 );
   printf( "\n  Returns the length of the initial portion of str1 \n containing only characters that appear in str2.\n  Therefore, if all of the characters in str1 are in str2, \n the function returns the length of the entire str1 string, and\n if the first character in str1 is not in str2, the function\n returns zero.\n");

   printf( "\n strspn(s1, s2) = %d\n", strspn( s1, s2 ) );

   return 0;
}
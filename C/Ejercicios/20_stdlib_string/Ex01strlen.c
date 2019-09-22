#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 256

int main(int argn, char* arg[]) {
	if ( (argn == 1) | (argn == 0) ) {
		char s[LEN] = "Hola a todos";

		printf( "s=%s\n", s );
		printf( "strlen(s) = %d\n", strlen( s ) );
	} else if (argn > 1) {
		char* str = (char*)calloc(LEN, sizeof(char));
		strcpy(str, arg[1]);

		printf( "s=%s\n", str );
		printf( "strlen(s) = %d\n", strlen( str ) );
   }

   return 0;
}
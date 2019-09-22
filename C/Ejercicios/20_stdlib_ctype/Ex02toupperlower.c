#include <stdio.h>
#include <ctype.h>

int main() {

   char cadena[] = "Esta es la cadena original";
   int i;

   printf(" Cadena original: %s \n\n", cadena);

   for(i = 0; cadena[i]; i++)
      cadena[i] = tolower(cadena[i]);

   printf(" tolower: %s\n", cadena);

	for (i = 0; cadena[i]; i++)
		cadena[i] = toupper(cadena[i]);

	printf(" toupper: %s\n", cadena);

   return 0;
}

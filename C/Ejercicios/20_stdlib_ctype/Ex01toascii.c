#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * int toascii(int c);
 *
 * Convierte caracteres a formato ASCII.
 *
 * toascii es una macro convierte el entero c a ASCII eliminando
 *  todos los bits menos los siete de menor peso. Eso
 *  proporciona un valor dentro del rango entre 0 y 127.
 *
 */

int main() {
   //char cadena[] = ";0asRb(hc&Rd1/";
   const int len = 3;
   int cadena[] = {65, 66, 67};
   char cadena2[] = "abcdABCD";
   int i;

   for(i = 0; i < len; i++)
      printf("%c, %d\n", cadena[i], toascii(cadena[i]));

   printf("\n");
   for(i = 0; i < strlen(cadena2); i++)
      printf("%c, %d\n", cadena2[i], toascii(cadena2[i]));

   return 0;
}

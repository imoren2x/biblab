#include <stdio.h>
#include <string.h>

/**
 * void *memchr(const void *s, int c, size_t n);
 *
 *  Localiza la primera aparición del carácter c (convertido
 * a unsigned char) en los primeros n caracteres (cada
 * uno interpretado como un unsigned char) del objeto
 * apuntado por s.
 *
 */

int main() {
   char cadena[] = "Erase una vez...";
   char *puntero;

   puntero = (char *) memchr( cadena, 'a', 5 );
   printf( "%s\n", cadena);
   printf( "%s\n", puntero );

   return 0;
}
#include <stdio.h>
#include <ctype.h>

/**
 *
 * isalnum 	(A - Z o a - z) o (0 - 9)
 * isalpha 	(A - Z o a - z)
 * isascii 	0 - 127 (0x00-0x7F)
 * iscntrl 	(0x7F o 0x00-0x1F)
 * isdigit 	(0 - 9)
 * isgraph 	Imprimibles menos ' '
 * islower 	(a - z)
 * isprint 	Imprimibles incluido ' '
 * ispunct 	Signos de puntuación
 * isspace 	espacio, tab, retorno de línea, cambio de línea, tab vertical, salto de página (0x09 a 0x0D, 0x20).
 * isupper 	(A-Z)
 * isxdigit	(0 to 9, A to F, a to f)
 *
 */

int main() {
	printf("\n Escribe el caracter a considerar: ");
	printf("\n>> ");
	char c;
	scanf("%c", &c);
	fflush(stdin);

   if ( isalnum(c) )
      printf("\n El caracter es alfanumerico: %c, %d\n", c, c);

	if ( isalpha(c) )
		printf("\n El caracter es alfabetico: %c, %d\n", c, c);

	if ( isascii(c) )
		printf("\n El caracter es ascii: %c, %d\n", c, c);

	if ( iscntrl(c) )
		printf("\n El caracter es de control: %c, %d\n", c, c);

	if ( isdigit(c) )
		printf("\n El caracter es un digito: %c, %d\n", c, c);

	if ( isgraph(c) )
		printf("\n El caracter es un grafo: %c, %d\n", c, c);

	if ( islower(c) )
		printf("\n El caracter es una minuscula: %c, %d\n", c, c);

	if ( isprint(c) )
		printf("\n El caracter es un imprimible: %c, %d\n", c, c);

	if ( ispunct(c) )
		printf("\n El caracter es un signo de puntuacion: %c, %d\n", c, c);

	if ( isspace(c) )
		printf("\n El caracter es un espacio: %c, %d\n", c, c);

	if ( isupper(c) )
		printf("\n El caracter es una mayuscula: %c, %d\n", c, c);

	if ( isxdigit(c) )
		printf("\n El caracter es un digito hexadecimal: %c, %d\n", c, c);

   return 0;
}

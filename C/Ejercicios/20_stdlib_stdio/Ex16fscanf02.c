#include <stdio.h>

/**
 * Especificadores de Conversi�n para fscanf ANSI C
 *  Enteros d 	Lee un entero decimal opcionalmente con signo.
		El argumento correspondiente es un puntero a un entero
 *  i 	Lee un entero decimal, octal, o hexadecimal
		opcionalmente con signo. El argumento correspondiente
		es un puntero a un entero
 *  o 	Lee un entero octal sin signo. El argumento
		correspondiente es un puntero a un entero sin signo
 *  u 	Lee un entero decimal sin signo. El argumento
		correspondiente es un puntero a un entero
		sin signo
 *  x � X 	Lee un entero hexadecimal. El argumento
		correspondiente es un puntero a un entero
		sin signo.
 *  h � l 	[Prefijo] Coloca antes de cualquier especificador
		de conversi�n de enteros para indicar que la
		entrada de datos es un entero de tipo short o
		long
 *
 */

int main(  ) {
   int ddec, idec, ioct, ihex;
   unsigned int ooct, udec, xhex;
   short int hddec;
   long int lddec;

   printf( "Introduce un n�mero decimal: " );
   scanf( "%d", &ddec );
   fflush(stdin);

   printf( "Introduce un n�mero decimal, octal (prec�delo con un cero, 0), y\\n  hexadecimal (prec�delo con un cero y una \'\\x\\\', 0x): " );
   scanf( "%i %i %i", &idec, &ioct, &ihex );

   printf( "Introduce un n�mero octal: " );
   scanf( "%o", &ooct );

   printf( "Introduce un n�mero decimal (no negativo): " );
   scanf( "%u", &udec );

   printf( "Introduce un n�mero hexadecimal: " );
   scanf( "%x", &xhex );

   printf( "Introduce un n�mero decimal \"peque�o\" y uno \"grande\": " );
   scanf( "%hd %ld", &hddec, &lddec );

   printf( "\\nHas introducido: " );
   printf( "%d %d %d %d %d %d %d %d %d\\n", ddec, idec, ioct, ihex, ooct, udec, xhex, hddec, lddec );

   return 0;
}

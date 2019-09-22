#include <stdio.h>

/**
 * Especificadores de Conversión para fscanf ANSI C
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
 *  x ó X 	Lee un entero hexadecimal. El argumento
		correspondiente es un puntero a un entero
		sin signo.
 *  h ó l 	[Prefijo] Coloca antes de cualquier especificador
		de conversión de enteros para indicar que la
		entrada de datos es un entero de tipo short o
		long
 *
 */

int main(  ) {
   int ddec, idec, ioct, ihex;
   unsigned int ooct, udec, xhex;
   short int hddec;
   long int lddec;

   printf( "Introduce un número decimal: " );
   scanf( "%d", &ddec );
   fflush(stdin);

   printf( "Introduce un número decimal, octal (precédelo con un cero, 0), y\\n  hexadecimal (precédelo con un cero y una \'\\x\\\', 0x): " );
   scanf( "%i %i %i", &idec, &ioct, &ihex );

   printf( "Introduce un número octal: " );
   scanf( "%o", &ooct );

   printf( "Introduce un número decimal (no negativo): " );
   scanf( "%u", &udec );

   printf( "Introduce un número hexadecimal: " );
   scanf( "%x", &xhex );

   printf( "Introduce un número decimal \"pequeño\" y uno \"grande\": " );
   scanf( "%hd %ld", &hddec, &lddec );

   printf( "\\nHas introducido: " );
   printf( "%d %d %d %d %d %d %d %d %d\\n", ddec, idec, ioct, ihex, ooct, udec, xhex, hddec, lddec );

   return 0;
}

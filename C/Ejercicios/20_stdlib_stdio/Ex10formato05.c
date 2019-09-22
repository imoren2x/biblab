#include <stdio.h>

/**
 * Miscel�neo n�meros enteros
 *
 [Prefijo] Coloca antes de un especificador para indicar la "anchura de campo" de caracteres, a la hora de asignar el valor introducido. S�lo se asignar�n los primeros x caracteres especificados por el n�mero prefijo.

 * p 	Lee un puntero de memoria de la misma forma producida cuando una direcci�n de memoria es convertida con %p en una sentencia de fprintf, printf, sprintf, vfprintf, vprintf, o vsprintf
 * n 	Guarda el n�mero de caracteres entradas hasta ahora en este fscanf, scanf, o sscanf. El argumento correspondiente es un puntero a un entero.
 * % 	Salta un signo de porcentaje (%) en los datos de entrada
 *
 *
 * 	[Prefijo] S�mbolo de supresi�n de asignaci�n. Act�a como un comod�n para el dato introducido.
 *
 */

int main( ) {
   int num1, num2, tam, porc;
   unsigned char cadena[10];
   unsigned int dia, mes, anyo;
   void *memPtr;

   printf( "Introduce un n�mero de 6 d�gitos: " );
   scanf( "%3d%3d", &num1, &num2 );
   printf( "El n�mero introducido ha sido separado en 2 n�meros de 3 d�gitos cada uno: %d y %d\n\n", num1, num2 );

   printf( "Introduce una palabra (hasta 10 letras): " );
   scanf( "%s%n", cadena, &tam );
   printf( "La palabra escrita: \"%s\", %d caracteres escritos. Comienza en la direcci�n: %p\n\n", cadena, tam, cadena );

   printf( "Introduce una direcci�n de memoria, en hexadecimal: " );
   scanf( "%p", &memPtr );
   printf( "La memoria es: %p, y como datos tiene: %s\n\n", memPtr, memPtr );

   printf( "Introduce un porcentaje (usa el s&iacute;mbolo %%): " );
   scanf( "%d%%", &porc );
   printf( "Introdujiste: %d%%\n\n", porc );

   printf( "Introduce la fecha de hoy: " );
   scanf( "%d%*c%d%*c%d", &dia, &mes, &anyo );
   printf( "D�a: %d, Mes: %d, A�o: %d\n\n", dia, mes, anyo );

   return 0;
}

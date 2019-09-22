#include <stdio.h>

/**
 * Misceláneo números enteros
 *
 [Prefijo] Coloca antes de un especificador para indicar la "anchura de campo" de caracteres, a la hora de asignar el valor introducido. Sólo se asignarán los primeros x caracteres especificados por el número prefijo.

 * p 	Lee un puntero de memoria de la misma forma producida cuando una dirección de memoria es convertida con %p en una sentencia de fprintf, printf, sprintf, vfprintf, vprintf, o vsprintf
 * n 	Guarda el número de caracteres entradas hasta ahora en este fscanf, scanf, o sscanf. El argumento correspondiente es un puntero a un entero.
 * % 	Salta un signo de porcentaje (%) en los datos de entrada
 *
 *
 * 	[Prefijo] Símbolo de supresión de asignación. Actúa como un comodín para el dato introducido.
 *
 */

int main( ) {
   int num1, num2, tam, porc;
   unsigned char cadena[10];
   unsigned int dia, mes, anyo;
   void *memPtr;

   printf( "Introduce un número de 6 dígitos: " );
   scanf( "%3d%3d", &num1, &num2 );
   printf( "El número introducido ha sido separado en 2 números de 3 dígitos cada uno: %d y %d\n\n", num1, num2 );

   printf( "Introduce una palabra (hasta 10 letras): " );
   scanf( "%s%n", cadena, &tam );
   printf( "La palabra escrita: \"%s\", %d caracteres escritos. Comienza en la dirección: %p\n\n", cadena, tam, cadena );

   printf( "Introduce una dirección de memoria, en hexadecimal: " );
   scanf( "%p", &memPtr );
   printf( "La memoria es: %p, y como datos tiene: %s\n\n", memPtr, memPtr );

   printf( "Introduce un porcentaje (usa el s&iacute;mbolo %%): " );
   scanf( "%d%%", &porc );
   printf( "Introdujiste: %d%%\n\n", porc );

   printf( "Introduce la fecha de hoy: " );
   scanf( "%d%*c%d%*c%d", &dia, &mes, &anyo );
   printf( "Día: %d, Mes: %d, Año: %d\n\n", dia, mes, anyo );

   return 0;
}

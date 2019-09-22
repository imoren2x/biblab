#include <stdio.h>

/**
 * N�meros de Coma Flotante
 *  e, E, f, g, � G 	Lee un valor de coma flotante. El
 *		 argumento correspondiente es un puntero a una
 * 		 variable de coma flotante.
 * l � L 	[Prefijo] Coloca antes de cualquier especificador
 * 		de conversi�n de coma flotante para indicar que la
 *		entrada de datos es un valor de tipo double o long
 *		double.
 *
 */

int main() {
   float ereal, freal, greal;
   double lfreal;
   long double Lfreal;

   printf( "Introduce un n�mero real: " );
   scanf( "%f", &freal );

   printf( "Introduce un n�mero real, con exponente: " );
   scanf( "%e", &ereal );

   printf( "Introduce otro n�mero real, con exponente: " );
   scanf( "%g", &greal );

   printf( "Introduce un n�mero real con doble precisi�n y otro con mayor a�n: " );
   scanf( "%lf %Lf", &lfreal, &Lfreal );

   printf( "\nHas introducido: " );
   printf( "%5.10f %5.12e %5.12g %10.20lf %10.20Lf\n", freal, ereal, greal, lfreal, Lfreal );

   return 0;
}

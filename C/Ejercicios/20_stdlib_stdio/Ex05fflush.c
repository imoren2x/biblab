#include <stdio.h>

/**
 * Funci�n fflush ANSI C
 *	int fflush(FILE *stream);
 *
 * Si stream apunta a un stream de salida o de actualizaci�n
 *   cuya operaci�n m�s reciente no era de entrada, la funci�n
 *   fflush env�a cualquier dato a�n sin escribir al entorno
 *   local o a ser escrito en el fichero; si no, entonces el
 *   comportamiento no est� definido. Si stream es un puntero
 *   nulo, la funci�n fflush realiza el despeje para todos
 *   los streams cuyo comportamiento est� descrito
 *   anteriormente.
 *
 * Valor de retorno:
 *   La funci�n fflush retorna cero si el stream fue
 *  despejado con �xito. Si se detectaron errores,
 *  entonces retorna EOF.
 */

int main() {
  // BUFSIZ:
  // Una expresi�n entera constante,
  //  el cual es el tama�o usado por la funci�n setbuf.
  char acumulador[BUFSIZ];

  setbuf( stdout, acumulador );

  printf( " Esto es una prueba\n" );
  printf( " Este mensaje se mostrara a la vez\n" );
  printf( " setbuf, acumula los datos en un puntero\n" );
  printf( " hasta que se llene completamente\n" );

  fflush( stdout );

  return 0;
}
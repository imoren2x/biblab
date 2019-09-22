#include <stdio.h>

/**
 * Función fflush ANSI C
 *	int fflush(FILE *stream);
 *
 * Si stream apunta a un stream de salida o de actualización
 *   cuya operación más reciente no era de entrada, la función
 *   fflush envía cualquier dato aún sin escribir al entorno
 *   local o a ser escrito en el fichero; si no, entonces el
 *   comportamiento no está definido. Si stream es un puntero
 *   nulo, la función fflush realiza el despeje para todos
 *   los streams cuyo comportamiento está descrito
 *   anteriormente.
 *
 * Valor de retorno:
 *   La función fflush retorna cero si el stream fue
 *  despejado con éxito. Si se detectaron errores,
 *  entonces retorna EOF.
 */

int main() {
  // BUFSIZ:
  // Una expresión entera constante,
  //  el cual es el tamaño usado por la función setbuf.
  char acumulador[BUFSIZ];

  setbuf( stdout, acumulador );

  printf( " Esto es una prueba\n" );
  printf( " Este mensaje se mostrara a la vez\n" );
  printf( " setbuf, acumula los datos en un puntero\n" );
  printf( " hasta que se llene completamente\n" );

  fflush( stdout );

  return 0;
}
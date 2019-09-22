#include <stdio.h>

/**
 * Función fsetpos ANSI C
 *  int fsetpos(FILE *stream, const fpos_t *posicion);
 *
 * La función fsetpos activa el indicador de posición de
 *  ficheros para el stream apuntado por stream según el valor
 *  del objeto apuntado por posicion, el cual será un valor
 *  obtenido de una llamada previa a la función fgetpos del
 *  mismo stream. Una llamada correcta a la función fsetpos
 *  despeja el indicador de final de fichero para el stream y
 *  deshace cualquier efecto producido por la función ungetc en
 *  el mismo stream. Después de una llamada a fsetpos, la
 *  siguiente operación en un stream de actualización puede ser
 *  de entrada o salida.
 *
 * Valor de retorno:
 *  La función fsetpos retorna cero si es llevada a cabo con
 *   éxito. Si falla, la función retorna un valor distinto a
 *   cero y guarda un valor positivo, según la definición de la
 *   implementación, en errno.
 *
 */

int main( ) {
  char nombre[11] = "datos4.dat",
       mensaje[81]="Esto es nua rpueba usando fgetpos y fsetpos.";
  FILE *fichero;
  fpos_t posicion=0, comienzo;

  fichero = fopen( nombre, "w+" );
  printf( "Fichero: %s -> ", nombre );
  if ( fichero )
    printf( "creado (ABIERTO)\n" );
  else {
    printf( "Error (NO ABIERTO)\n" );
    return 1;
  }

  fgetpos( fichero, &comienzo );
  printf( "Posicion del fichero: %d\n", posicion );

  fprintf( fichero, mensaje );
  printf( "\nEscrito: \"%s\"\n", mensaje );

  fgetpos( fichero, &posicion );
  printf( "Posicion del fichero: %d\n", posicion );

  fsetpos( fichero, &comienzo );
  fprintf( fichero, "%s", "Esto es una prueba" );
  printf( "Corregiendo errores...Escrito: \"Esto es una prueba\"\n" );

  fgetpos( fichero, &posicion );
  printf( "Posicion del fichero: %d\n", posicion );

  rewind( fichero );
  printf( "\"Rebobinando\" el fichero -> Vuelta al comienzo\n" );
  fgetpos( fichero, &posicion );
  printf( "Posicion del fichero: %d\n", posicion );

  printf( "\nLeyendo del fichero \"%s\"\n", nombre );
  fgets( mensaje, 81, fichero );
  printf( "\"%s\"\n\n", mensaje );

  fgetpos( fichero, &posicion );
  printf( "Posicion del fichero: %d\n", posicion );

  if ( !fclose(fichero) )
    printf( "Fichero cerrado\n" );
  else {
    printf( "Error: fichero NO CERRADO\n" );
    return 1;
  }

  return 0;
}
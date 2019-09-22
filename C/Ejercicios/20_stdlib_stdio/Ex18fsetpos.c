#include <stdio.h>

/**
 * Funci�n fsetpos ANSI C
 *  int fsetpos(FILE *stream, const fpos_t *posicion);
 *
 * La funci�n fsetpos activa el indicador de posici�n de
 *  ficheros para el stream apuntado por stream seg�n el valor
 *  del objeto apuntado por posicion, el cual ser� un valor
 *  obtenido de una llamada previa a la funci�n fgetpos del
 *  mismo stream. Una llamada correcta a la funci�n fsetpos
 *  despeja el indicador de final de fichero para el stream y
 *  deshace cualquier efecto producido por la funci�n ungetc en
 *  el mismo stream. Despu�s de una llamada a fsetpos, la
 *  siguiente operaci�n en un stream de actualizaci�n puede ser
 *  de entrada o salida.
 *
 * Valor de retorno:
 *  La funci�n fsetpos retorna cero si es llevada a cabo con
 *   �xito. Si falla, la funci�n retorna un valor distinto a
 *   cero y guarda un valor positivo, seg�n la definici�n de la
 *   implementaci�n, en errno.
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
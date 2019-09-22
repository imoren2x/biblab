#include <stdio.h>

/**
 * Funci�n fgetpos ANSI C
 *  int fgetpos(FILE *stream, fpos_t *posicion);
 *
 * La funci�n fgetpos guarda el valor actual del indicador
 *  de posici�n de ficheros para el stream apuntado por
 *  stream en el objeto apuntado por posicion. El valor
 *  guardado contiene informaci�n no especificado servible
 *  a la funci�n fsetpos para recolocar el stream a su
 *  posici�n cuando se llam� a la funci�n fgetpos.
 *
 * Valor de retorno:
 *  La funci�n fgetpos retorna cero si es llevada a cabo
 *   con �xito. Si falla, la funci�n retorna un valor
 *   distinto a cero y guarda un valor positivo, seg�n la
 *   definici�n de la implementaci�n, en errno.
 *
 */

int main( ) {
  char nombre[11] = "datos4.dat",
       mensaje[81] = "Esto es nua preuba usando fgetpos y fsetpos.";
  FILE *fichero;
  fpos_t posicion = 0, comienzo;

  fichero = fopen( nombre, "w+" );
  printf( "Fichero: %s -> ", nombre );
  // if ( fichero )
    // printf( "creado (ABIERTO)\n" );
  // else {
    // printf( "Error (NO ABIERTO)\n" );
    // return 1;
  // }
  ( fichero != 0 ) ? printf( "creado (ABIERTO)\n" ): printf( "Error (NO ABIERTO)\n" );

  fgetpos( fichero, &comienzo );
  printf( "Posicion del fichero: %d\n", comienzo );

  //Escribe el mensaje en el fichero//
  fprintf( fichero, mensaje );
  printf( "\nEscrito: \"%s\"\n", mensaje );

  fgetpos( fichero, &posicion );
  printf( "Posicion del fichero: %d\n", posicion );

  //Escribe algo que va a corregir//
  fsetpos( fichero, &comienzo );
  fprintf( fichero, "%s", "Esto es una prueba" );
  printf( "Corregiendo errores... Escrito: \"Esto es una prueba\"\n" );


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
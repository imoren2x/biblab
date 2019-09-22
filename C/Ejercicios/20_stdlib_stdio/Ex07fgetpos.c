#include <stdio.h>

/**
 * Función fgetpos ANSI C
 *  int fgetpos(FILE *stream, fpos_t *posicion);
 *
 * La función fgetpos guarda el valor actual del indicador
 *  de posición de ficheros para el stream apuntado por
 *  stream en el objeto apuntado por posicion. El valor
 *  guardado contiene información no especificado servible
 *  a la función fsetpos para recolocar el stream a su
 *  posición cuando se llamó a la función fgetpos.
 *
 * Valor de retorno:
 *  La función fgetpos retorna cero si es llevada a cabo
 *   con éxito. Si falla, la función retorna un valor
 *   distinto a cero y guarda un valor positivo, según la
 *   definición de la implementación, en errno.
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


#include <stdio.h>
#include <string.h>

/**
 * Función ftell ANSI C
 * long int ftell(FILE *stream);
 *
 * La función fseek obtiene el valor actual del indicador
 *  de posición de fichero para el stream apuntado por stream.
 * Para un stream binario, el valor es el número de caracteres
 *  desde el principio del fichero.
 * Para un stream de texto, su indicador de posición de fichero
 *  contiene información no especificado, servible a la función
 *  fseek para retornar el indicador de posición de fichero
 *  para el stream a su posición cuando se llamó a ftell; la
 *  diferencia entre los dos valores de retorno no es
 *  necesariamente una medida real del número de caracteres
 *  escritos o leídos.
 *
 * Valor de retorno:
 * La función ftell retorna el valor del indicador de posición
 * de fichero para el stream, si se tiene éxito. Si falla, la
 * función ftell retorna -1L y guarda un valor positivo, según
 * la definición de la implementación, en errno.
 *
 */

int main(  ) {
  char nombre[11] = "datos4.dat", mensaje[81]="";
  FILE *fichero;
  long int comienzo, final;

  fichero = fopen( nombre, "r" );
  printf( "Fichero: %s -> ", nombre );
  if ( fichero )
    printf( "existe (ABIERTO)\n" );
  else {
    printf( "Error (NO ABIERTO)\n" );
    return 1;
  }

  if ( (comienzo = ftell( fichero ) ) < 0 )
	printf( "ERROR: ftell no ha funcionado\n" );
  else
	printf( "Posicion del fichero: %d\n\n", comienzo );

  fseek( fichero, 0L, SEEK_END );
  final = ftell( fichero );

  fseek( fichero, 0L, SEEK_SET );
  fgets( mensaje, 80, fichero );
  printf( "Tamaño del fichero \"%s\": %d bytes\n", nombre, final - comienzo + 1 );
  printf( "Mensaje del fichero:\n%s\n", mensaje );
  printf( "\nTamaño del mensaje (usando strlen): %d\n", strlen(mensaje) );

  if ( !fclose(fichero) )
    printf( "Fichero cerrado\n" );
  else {
    printf( "Error: fichero NO CERRADO\n" );
    return 1;
  }

  return 0;
}

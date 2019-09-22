

#include <stdio.h>
#include <string.h>

/**
 * Funci�n ftell ANSI C
 * long int ftell(FILE *stream);
 *
 * La funci�n fseek obtiene el valor actual del indicador
 *  de posici�n de fichero para el stream apuntado por stream.
 * Para un stream binario, el valor es el n�mero de caracteres
 *  desde el principio del fichero.
 * Para un stream de texto, su indicador de posici�n de fichero
 *  contiene informaci�n no especificado, servible a la funci�n
 *  fseek para retornar el indicador de posici�n de fichero
 *  para el stream a su posici�n cuando se llam� a ftell; la
 *  diferencia entre los dos valores de retorno no es
 *  necesariamente una medida real del n�mero de caracteres
 *  escritos o le�dos.
 *
 * Valor de retorno:
 * La funci�n ftell retorna el valor del indicador de posici�n
 * de fichero para el stream, si se tiene �xito. Si falla, la
 * funci�n ftell retorna -1L y guarda un valor positivo, seg�n
 * la definici�n de la implementaci�n, en errno.
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
  printf( "Tama�o del fichero \"%s\": %d bytes\n", nombre, final - comienzo + 1 );
  printf( "Mensaje del fichero:\n%s\n", mensaje );
  printf( "\nTama�o del mensaje (usando strlen): %d\n", strlen(mensaje) );

  if ( !fclose(fichero) )
    printf( "Fichero cerrado\n" );
  else {
    printf( "Error: fichero NO CERRADO\n" );
    return 1;
  }

  return 0;
}

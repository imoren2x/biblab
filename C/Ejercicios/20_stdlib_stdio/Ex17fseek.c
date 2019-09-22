#include <stdio.h>
#include <string.h>


/**
 * Funci�n fseek ANSI C
 * int fseek(FILE *stream, long int desplazamiento, int origen);
 *
 * La funci�n fseek activa el indicador de posici�n de ficheros para el stream apuntado por stream.
 * Para un stream binario, la nueva posici�n, medido en caracteres del principio del fichero, es obtenida mediante la suma de desplazamiento y la posici�n especificada por origen.
 * Origen:
 * SEEK_SET: La posici�n especificada es el comienzo del fichero si origen es SEEK_SET,
 * SEEK_CUR: el valor actual del indicador de posici�n de fichero si es SEEK_CUR,
 * o final de fichero si es SEEK_END.
 * Un stream binario realmente no necesita soportar llamadas a fseek con un valor de origen de SEEK_END.
 * Para un stream de texto, o bien desplazamiento ser� cero, o bien desplazamiento ser� un valor retornado por una llamada anterior a la funci�n ftell al mismo stream y origen ser� SEEK_SET. Una llamada correcta a la funci�n fseek despeja el indicador de final de fichero para el stream y deshace cualquier efecto producido por la funci�n ungetc en el mismo stream.
 * Despu�s de una llamada a fseek, la siguiente operaci�n en un stream de actualizaci�n puede ser de entrada o salida.
 *
 * Valor de retorno:
 * La funci�n fseek retorna un valor distinto a cero s�lo si una petici�n no se pudo satisfacer.
 *
 */

int main() {
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

  if ( (comienzo=ftell( fichero )) < 0 )
	printf( "ERROR: ftell no ha funcionado\n" );
  else
	printf( "Posici�n del fichero: %d\n\n", comienzo );

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
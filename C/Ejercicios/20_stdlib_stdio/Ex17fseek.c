#include <stdio.h>
#include <string.h>


/**
 * Función fseek ANSI C
 * int fseek(FILE *stream, long int desplazamiento, int origen);
 *
 * La función fseek activa el indicador de posición de ficheros para el stream apuntado por stream.
 * Para un stream binario, la nueva posición, medido en caracteres del principio del fichero, es obtenida mediante la suma de desplazamiento y la posición especificada por origen.
 * Origen:
 * SEEK_SET: La posición especificada es el comienzo del fichero si origen es SEEK_SET,
 * SEEK_CUR: el valor actual del indicador de posición de fichero si es SEEK_CUR,
 * o final de fichero si es SEEK_END.
 * Un stream binario realmente no necesita soportar llamadas a fseek con un valor de origen de SEEK_END.
 * Para un stream de texto, o bien desplazamiento será cero, o bien desplazamiento será un valor retornado por una llamada anterior a la función ftell al mismo stream y origen será SEEK_SET. Una llamada correcta a la función fseek despeja el indicador de final de fichero para el stream y deshace cualquier efecto producido por la función ungetc en el mismo stream.
 * Después de una llamada a fseek, la siguiente operación en un stream de actualización puede ser de entrada o salida.
 *
 * Valor de retorno:
 * La función fseek retorna un valor distinto a cero sólo si una petición no se pudo satisfacer.
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
	printf( "Posición del fichero: %d\n\n", comienzo );

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
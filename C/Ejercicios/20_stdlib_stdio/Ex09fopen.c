#include <stdio.h>

/**
 * Función fopen ANSI C
 *  FILE *fopen(const char *nombre, const char *modo);
 *
 * Abre un fichero cuyo nombre es la cadena apuntada por
 *  nombre, y adjudica un stream a ello. El argumento modo
 *  apunta a una cadena empezando con una serie de
 *  caracteres de la siguiente secuencia:
 *
 *  r 	Abre un fichero de texto para lectura
 *  w 	Trunca, a longitud cero o crea un fichero de texto
			para escribir
 *  a 	Añade; abre o crea un fichero de texto para escribir
			al final del fichero (EOF)
 *  rb 	Abre un fichero en modo binario para lectura
 *  wb 	Trunca, a longitud cero o crea un fichero
			en modo binario para escribir
 *  ab 	Añade; abre o crea un fichero en modo binario para
			escribir al final del fichero (EOF)
 *  r+ 	Abre un fichero de texto para actualización
			(lectura y escritura)
 *  w+ 	Trunca, a longitud cero o crea un fichero de texto
			para actualización
 *  a+ 	Añade; abre o crea un fichero de texto para
			actualización, escribiendo al final del
			fichero (EOF)
 *  r+b ó rb+ 	Abre un fichero en modo binario para
			actualización (lectura y escritura)
 *  w+b ó wb+ 	Trunca, a longitud cero o crea un fichero en
			modo binario para actualización
 *  a+b ó ab+ 	Añade; abre o crea un fichero en modo
			binario para actualización, escribiendo al
			final del fichero (EOF)

 * Abriendo un fichero con el modo de lectura ('r' como el
 *  primer carácter del argumento modo) fallará si el fichero
 *  no existe o no puede ser leído. Abriendo el fichero con
 *  el modo de añadidura ('a' como el primer carácter del
 *  argumento modo) ocasiona todas las escrituras posteriores
 *  al fichero a ser forzadas al final de fichero (EOF)
 *  actual, sin considerar llamadas interventivas a la
 *  función fseek. En algunas implementaciones, abriendo un
 *  fichero en modo binario con el modo de añadidura ('b'
 *  como el segundo o tercer carácter del argumento modo)
 *  puede colocar, inicialmente, el indicador de posición
 *  de ficheros para el stream más allá de los últimos
 *  datos escritos, debido al relleno de caracteres nulos.

Cuando un fichero es abierto con el modo de actualización ('+' como el segundo o tercer carácter del argumento modo), la entrada y salida pueden ser manipuladas en el stream asociado. Sin embargo, la salida no puede estar seguida directamente de una entrada sin tener una llamada interventiva a la función fflush o a una función de manipulación del fichero de posición (fseek, fsetpos, o rewind), y la entrada no puede estar seguida directamente de una salida sin tener una llamada interventiva a una función de manipulación del fichero de posición, al menos que el proceso de entrada encuentre un final de fichero (EOF). Abriendo (o creando) un fichero de texto con el modo de actualización puede en su lugar abrir (o crear) un stream binario en algunas implementaciones.

Cuando es abierto, un stream es almacenado completamente si, y sólo si, puede ser determinado que no hace referencia a un dispositivo interactivo. Los indicadores de error y final de fichero (EOF) para el stream son borrados.


 * Valor de retorno:
 *  La función fopen retorna un puntero al objeto
 *  controlando el stream. Si el proceso de abertura no
 *  es realizado acabo, entonces retorna un puntero nulo.
 *
 */


int main() {
   FILE *fichero;
   char nombre[10] = "datos.dat";

   fichero = fopen( nombre, "w" );
   printf( "Fichero: %s -> ", nombre );
   fichero ? printf( "creado (ABIERTO)\n" ):
		printf( "Error (NO ABIERTO)\n" );

   if ( !fclose(fichero) )
      printf( "Fichero cerrado\n" );
   else {
      printf( "Error: fichero NO CERRADO\n" );
      return 1;
   }
   return 0;
}
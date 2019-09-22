#include <stdio.h>

/**
 * Funci�n fopen ANSI C
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
 *  a 	A�ade; abre o crea un fichero de texto para escribir
			al final del fichero (EOF)
 *  rb 	Abre un fichero en modo binario para lectura
 *  wb 	Trunca, a longitud cero o crea un fichero
			en modo binario para escribir
 *  ab 	A�ade; abre o crea un fichero en modo binario para
			escribir al final del fichero (EOF)
 *  r+ 	Abre un fichero de texto para actualizaci�n
			(lectura y escritura)
 *  w+ 	Trunca, a longitud cero o crea un fichero de texto
			para actualizaci�n
 *  a+ 	A�ade; abre o crea un fichero de texto para
			actualizaci�n, escribiendo al final del
			fichero (EOF)
 *  r+b � rb+ 	Abre un fichero en modo binario para
			actualizaci�n (lectura y escritura)
 *  w+b � wb+ 	Trunca, a longitud cero o crea un fichero en
			modo binario para actualizaci�n
 *  a+b � ab+ 	A�ade; abre o crea un fichero en modo
			binario para actualizaci�n, escribiendo al
			final del fichero (EOF)

 * Abriendo un fichero con el modo de lectura ('r' como el
 *  primer car�cter del argumento modo) fallar� si el fichero
 *  no existe o no puede ser le�do. Abriendo el fichero con
 *  el modo de a�adidura ('a' como el primer car�cter del
 *  argumento modo) ocasiona todas las escrituras posteriores
 *  al fichero a ser forzadas al final de fichero (EOF)
 *  actual, sin considerar llamadas interventivas a la
 *  funci�n fseek. En algunas implementaciones, abriendo un
 *  fichero en modo binario con el modo de a�adidura ('b'
 *  como el segundo o tercer car�cter del argumento modo)
 *  puede colocar, inicialmente, el indicador de posici�n
 *  de ficheros para el stream m�s all� de los �ltimos
 *  datos escritos, debido al relleno de caracteres nulos.

Cuando un fichero es abierto con el modo de actualizaci�n ('+' como el segundo o tercer car�cter del argumento modo), la entrada y salida pueden ser manipuladas en el stream asociado. Sin embargo, la salida no puede estar seguida directamente de una entrada sin tener una llamada interventiva a la funci�n fflush o a una funci�n de manipulaci�n del fichero de posici�n (fseek, fsetpos, o rewind), y la entrada no puede estar seguida directamente de una salida sin tener una llamada interventiva a una funci�n de manipulaci�n del fichero de posici�n, al menos que el proceso de entrada encuentre un final de fichero (EOF). Abriendo (o creando) un fichero de texto con el modo de actualizaci�n puede en su lugar abrir (o crear) un stream binario en algunas implementaciones.

Cuando es abierto, un stream es almacenado completamente si, y s�lo si, puede ser determinado que no hace referencia a un dispositivo interactivo. Los indicadores de error y final de fichero (EOF) para el stream son borrados.


 * Valor de retorno:
 *  La funci�n fopen retorna un puntero al objeto
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
#include <stdio.h>
#include <string.h>

int main() {
   int errnum;

   printf("\n Convierte el numero de error en errnum  \na un mensaje de error (una cadena de caracteres).\n");
   printf("\n La funcion retorna la cadena de caracteres \nconteniendo el mensaje asociado con el numero de error. \n Esta conversion y el contenido del mensaje dependen de \nla implementacion. La cadena no sera modificada por el programa, \npero si puede ser sobrescrito con otra llamada a la \nmisma funcion.\n\n");


   for( errnum = 0; errnum < 39; errnum++ )
     printf( "strerror(%d) = %s\n", errnum, strerror( errnum ) );

   return 0;
}
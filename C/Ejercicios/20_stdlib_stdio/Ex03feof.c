#include <stdio.h>

int main( void ) {
   int tamanyo = 0;
   FILE *ficheroEntrada, *ficheroSalida;
   char nombreEntrada[11] = "datos2.dat", nombreSalida[11]="datos3.dat";

   ficheroEntrada = fopen( nombreEntrada, "r" );
   printf( "Fichero de Lectura: %s -> ", nombreEntrada );
   if( ficheroEntrada )
      printf( "existe (ABIERTO)\n" );
   else {
      printf( "Error (NO ABIERTO)\n" );
      return 1;
   }

   ficheroSalida = fopen( nombreSalida, "w" );
   printf( "Fichero de Escritura: %s -> ", nombreSalida );
   if( ficheroSalida )
      printf( "creado (ABIERTO)\n" );
   else {
      printf( "Error (NO ABIERTO)\n" );
      return 1;
   }

   while( !feof(ficheroEntrada) ) {
      fputc( fgetc(ficheroEntrada) + 3, ficheroSalida );
	  /* Desplazar cada carácter 3 caracteres: a -> d, b -> e, ... */
      tamanyo++;
   }
   printf( "El fichero \'%s\' contiene %d caracteres.\n",
	nombreEntrada,
	tamanyo );

   if ( !fclose(ficheroSalida) )
      printf( "Fichero: %s cerrado\n", nombreSalida );
   else {
      printf( "Error: fichero: %s NO CERRADO\n", nombreSalida );
      return 1;
   }

   if ( !fclose(ficheroEntrada) )
      printf( "Fichero: %s cerrado\n", nombreEntrada );
   else {
      printf( "Error: fichero: %s NO CERRADO\n",
		nombreEntrada );
      return 1;
   }

   return 0;
}
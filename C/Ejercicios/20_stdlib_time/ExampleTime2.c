#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( int argn, char *argv[] ) {
   int segundos = 0;
   time_t *actualPtr, alarma;
   struct tm *alarmaPtr;

   if (argn == 1) {
	printf( "Introduzca los segundos en el futuro para la alarma: " );
	scanf( "%d", &segundos );
   } else if ( argn == 2 ) {
	segundos = (int) atoi(argv[1]);
   }

   actualPtr = (time_t*) calloc(1, sizeof(time_t));
   *actualPtr = time( NULL );
   alarmaPtr = localtime( actualPtr );
   printf("\nTiempo actual: \t\t %s", ctime(actualPtr));
   alarmaPtr->tm_sec += segundos;
   //Transforma el struct tm en time_t//
   alarma = mktime( alarmaPtr );
   printf( "La Alarma sonara: \t %s\n", ctime(&alarma) );

   printf("\n");
	while( difftime( alarma, *actualPtr ) > 0 ) //{
      *actualPtr = time( NULL ); printf("-");
	  //sleep(1);
	//}
   printf("\n");

   printf( "ALARMA!!!\n\n" );
   printf( "La hora local: %s\n", ctime(actualPtr) );

   return 0;
}
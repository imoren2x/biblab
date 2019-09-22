#include <stdio.h>
#include <time.h>

//void sleep0( int delay);

int main( void ) {
   long int i = 0;
   time_t comienzo, final;//tiempo condensado (long int)//

   comienzo = time( NULL );
   for( i=0; i < 20; i++ ) {
	printf( "-" );
	sleep(1);//tengo que buscar informacion della//
	//sleep0
	}
   final = time( NULL );

   printf( "\nComienzo: \t %ld s\n", (long int) comienzo );
   printf( "\nFinal: \t\t %ld s\n", (long int) final );
   printf( "\nNumero de segundos transcurridos desde el comienzo del programa: %f s\n", difftime(final, comienzo) );
   //difftime retorna un double//

   //Definicion de tiempos //
   struct tm *tiempoComienzoPtrUTC, *tiempoFinalPtrUTC;
   struct tm *tiempoComienzoPtrLocal, *tiempoFinalPtrLocal;
   //Tiempo en formato UTC//
   tiempoComienzoPtrUTC = gmtime( &comienzo );
   tiempoFinalPtrUTC = gmtime( &final );
   //Definicion de strings con tiempo en UTC//
   char* strComienzo = asctime(tiempoComienzoPtrUTC);
   char* strFinal = asctime(tiempoFinalPtrUTC);
   printf( "\n");
   printf( "\nComienzo: \t %s (UTC)\n", strComienzo );
   printf( "\nFinal: \t\t %s (UTC)\n", strFinal );
   //Tiempo en formato local time//
   //	A. localtime + asctime//
   tiempoComienzoPtrLocal = localtime( &comienzo );
   tiempoFinalPtrLocal = localtime( &final );
   strComienzo = asctime(tiempoComienzoPtrLocal);
   strFinal = asctime(tiempoComienzoPtrLocal);
   //	B. ctime//
   char* strComienzoB = ctime( &comienzo);
   char* strFinalB = ctime( &final);
   printf( "\n");
   printf( "\nComienzo: \t %s (Local time)\n", strComienzo );
   printf( "\nFinal: \t\t %s (Local time)\n", strFinal );
   printf( "\n");
   printf( "\nComienzo: \t %s (Local time)\n", strComienzoB );
   printf( "\nFinal: \t\t %s (Local time)\n", strFinalB );

   return 0;
}

// void sleep0( int delay) {

	// time_t t0 = time(NULL);
	// time_t end = time(NULL);

	// while ( (end - t0) < delay) {//difftime(final, comienzo)
		// end = time(NULL);
	// }

	// return;
// }
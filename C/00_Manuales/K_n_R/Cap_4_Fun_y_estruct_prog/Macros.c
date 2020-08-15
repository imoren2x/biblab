//This programme plays with macros conditional macros//
#include <stdio.h>
#include <stdlib.h>

#define MAX 10

#undef MAX  // It makes MAX undefined. It can be used to check if a routine is
            // really a function, not a macro.

#define MAX 10

#define BUCLE for ( i = 1; i < MAX; i++) \
        {     \
              printf("%d\n",i); \
              };               \

#define square(x) x*x;


//Si un nombre de parámetro está precedido por un # en el texto de reemplazo, la
//  combinación se expandirá en una cadena entre comillas, con el parámetro re-
//  emplazado por el argumento real.
//Esto puede combinarse con concatenación de cadenas para hacer, por ejemplo,
//  una macro de impresión para depuración.

#define dprintf(expr) printf("\n" #expr " = %d\n", expr);

//El operador ## del preprocesador proporciona una forma de concatenar
//  argumentos actuales durante la expansión de una macro. Si un parámetro que
//  está en el texto de reemplazo esta a un lado u otro de ##, se concatenan y
//  se eliminan los espacios en blanco y el resultado se rastrea de nuevo.
#define paste(front, back) front ## back
    // paste(nombre, 1) crea el identificador nombre1.

#if SYSTEM == SYSV
    #define HDR "sysv.h"
#elif SYSTEM == BSD
    #define HDR "bsd.h"
#elif SYSTEM == MSDOS
    #define HDR "msdos.h"
#else
    #define HDR "default.h"
#endif

//#include HDR

#ifndef HDR
    #define HDR
        //Contenido de hdr.h va aquí//
#endif


//Las substituciones de macros valen sólo para elementos y no puede//
//    ocurrir dentro de cadenas delimitadas por comillas.//

int main()
{
 int i;
 int z= 1, x;

 BUCLE;

 x = square(z + 2);
 printf("\nThe right result should be %d\n",x); // You can't use square directly.
 dprintf(x);



 printf("\n");
 system("pause");
 return 0;
}

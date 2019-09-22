/*
 ============================================================================
 Name        : DLLuso.c
 Author      : imoren2x
 Version     :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int suma_int(int, int);
int es_cadena_palindroma(char *);

typedef int (WINAPI*cfunc1)(int, int);//definición de puntero a funcion
cfunc1 ConexionDLL1;

typedef int (WINAPI*cfunc2)(char *);
cfunc2 ConexionDLL2;

int main(int argc, char *argv[])
{
    int a, b, resultado;
    char cadena[50];

    printf("\n Introduzca a: ");
    scanf("%d", &a);
    printf("\n Introduzca b: ");
    scanf("%d", &b);
    resultado = suma_int(a, b);
    printf("Resultado a+b = %d", resultado);

    printf("\n Introduzca la cadena de caracteres: ");
    scanf("%s", cadena);
    if(es_cadena_palindroma(cadena))
    {
    	printf("Es palindroma\n");
    }
    else
    {
    	printf("NO es palindroma\n");
    }

    printf("\n");
    system("PAUSE");
    return EXIT_SUCCESS;
}


/*----------------------------*/
/*         llamada dll        */
/*----------------------------*/
int suma_int(int a, int b)
{
     int res = 0;
     HINSTANCE hLib;
     hLib = LoadLibrary("libDLLbasica.dll");

     if(hLib!=0)
     {
          ConexionDLL1 = (int (__stdcall *) (int, int)) GetProcAddress(hLib,"suma");
          res = ConexionDLL1(a, b);
     }
     else
     {
         printf("No se ha podido cargar DLL");
         FreeLibrary(hLib);
     }

     return res;
}


int es_cadena_palindroma(char *cadena)
{
     int res = 0;
     HINSTANCE hLib2;
     hLib2 = LoadLibrary("libDLLbasica.dll");

     if(hLib2!=0)
     {
          ConexionDLL2 = (int (__stdcall *) (char *)) GetProcAddress(hLib2,"es_palindroma");
          res = ConexionDLL2(cadena);
     }
     else
     {
    	 printf("No se ha podido cargar DLL");
         FreeLibrary(hLib2);
     }

     return res;
}

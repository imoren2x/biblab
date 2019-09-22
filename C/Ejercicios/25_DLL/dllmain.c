/*
 * dllmain.c
 *
 * Created on: 16/11/2010
 * Author: imoren2x
 */

/* dllmain.cpp */

#include "dll.h"
#include <windows.h>


int suma(int a, int b)
{
    return a + b;
}

int longitud(char *cadena)
{
    int len = 0;
    int i = 0;
    for(i=0; ; i++)
    {
        if(cadena[ i ] == '\0')
           break;

        len ++;
    }
    return len;
}

int es_palindroma(char *cadena)
{
   int i;
   char invertida[50];

   /* Halla la cadena invertida */
   for(i=0; i < longitud(cadena); i++)
       invertida[ i ] = cadena[longitud(cadena)-i-1];

   /* Coloca caracter de fin de cadena */
   invertida[ i ] = '\0';

   /* Realiza la comparacion */
   if(!strcmp(cadena, invertida))
      return 1; /* es un palindromo */

   return 0;  /* no es un palindromo */
}


BOOL APIENTRY DllMain (HINSTANCE hInst     /* Library instance handle. */ ,
                       DWORD reason        /* Reason this function is being called. */ ,
                       LPVOID reserved     /* Not used. */ )
{
    switch (reason)
    {
      case DLL_PROCESS_ATTACH:
        break;

      case DLL_PROCESS_DETACH:
        break;

      case DLL_THREAD_ATTACH:
        break;

      case DLL_THREAD_DETACH:
        break;
    }

    /* Returns TRUE on success, FALSE on failure */
    return TRUE;
}

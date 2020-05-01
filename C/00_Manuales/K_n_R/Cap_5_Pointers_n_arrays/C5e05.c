/*
 * Esta función reserva punteros dobles (punteros a punteros) 
 */
// Inclusions list
#include <stdio.h>

// Global declarations


// Constants

// Program main
int main()
{
 // variables
 char **c;
 
 c = (char**)malloc(sizeof(char*));
 
 *c = (char*)malloc(strlen("ya es hora")*sizeof(char));
 
 strcpy(*c,"ya es hora");
 
 // body


  return 0;
}

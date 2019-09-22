/*
 ============================================================================
 Name        : EscribeArgv.c
 Author      : imoren2x (imoren2x@users.sourcefourge.net)
 Version     :
 Copyright   : Your copyright notice
 Description :
			Crea un fichero con el nombre del primer argumento y en el fichero
			crea todos los argumentos con que se llama a la función separados
			de un espacio.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int fexist(const char* s);

int main(int argc, char *argv[])
{
  //Abrir el fichero//
  FILE *f1 = fopen(argv[1], "wa");
  /*
    if !exist("hola.txt")
	{
	f = createIfNotExist("hola.txt")
  */

  int i;
  for (i = 1; i <= argc; i++)
  {
     //Write n-th argument in file//
     fputs(argv[i], f1);
	 //Blank space//
     fputs(" ", f1);
  }

  fclose(f1);

  return 0;
}

int fexist(const char* s)
{
	FILE *f = fopen(s, "r");
	int rvalue;

	if (f == NULL)
	  rvalue = 0; //Non-existant//
	else
	  rvalue = 1; //Exists//
	fclose(f);

	return rvalue;
}

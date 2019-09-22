/*
 ============================================================================
 Name        : EscribeArgv.c
 Author      : imoren2x (imoren2x@users.sourcefourge.net)
 Version     :
 Copyright   : Your copyright notice
 Description : Lee un fichero indicado como argumento y presenta por pantalla
				todas las entradas del fichero.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *f1 = fopen(argv[1], "r");

  int i;
  int iStrSize = 256;
  char *string = (char*)malloc(iStrSize*sizeof(char));
  for (i = 1; i <= (argc - 1); i++)
  {  fgets(string, iStrSize-1, f1);
     printf("%s", string);
  }

  fclose(f1);

  return 0;
}

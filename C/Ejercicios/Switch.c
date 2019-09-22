#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 int a, b, c;

  switch(argc)
  {
    case 2: a = atoi(argv[1]); break;
	default: printf("\nUnexpected Error\n");
  }

/*
  switch(argv[1])
  {
    case "4": a = atoi(argv[1]); break;
	default: printf("\nUnexpected Error\n");
  }
*/

  printf("\n a = %d", a);

  return 0;

}
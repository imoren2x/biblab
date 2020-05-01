#include <stdio.h>
#include <stdlib.h>

/*
int sumados(int a, int b);

int restados(int a, intb);
*/

static int sumados(int a, int b)
{
   return restados(a,b) + 2*b;
}

static int restados(int c, int d)
{
 return c -d; //sumados(c,d) - 2*d;
}

int main()
{
 int a, b;

 a = 1;
 b = 2;

 printf("El resultado es: %d", restados(a,b));

 system("PAUSE");
 return 0;

}

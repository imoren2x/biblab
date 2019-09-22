#include <stdio.h>
#include <stdlib.h>

int f_fibonacci_rec(int n);
int f_fibonacci_ite(int n);

int main(int argc, char *argv[])
{
    /**
        F(0) = 0;
        F(1) = 1;
        F(n) = F(n-1) + F(n-2);
    */
  int i_orden;

  printf("\n Escribe el orden de la sucesion de Fibonacci: ");
  printf("\n >> ");
  scanf("%d", &i_orden);

  int i_i = 0;
  for (i_i = 0; i_i <= i_orden; i_i++)
  {
        printf("\n");
        printf("%d \t | ", i_i);
        printf("%d", f_fibonacci_rec(i_i));
  }

  printf("\n \n");
  system("PAUSE");
  return 0;
}

int f_fibonacci_rec(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return f_fibonacci_rec(n-1) + f_fibonacci_rec(n-2);
    }

}

/**
    F(n) = 1/sqrt(5) ( alfa^n + beta^n )
        alfa = (1 + sqrt(5))/2
        beta = (1 - sqrt(5))/2
*/

int f

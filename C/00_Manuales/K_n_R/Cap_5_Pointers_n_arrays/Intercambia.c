#include <stdio.h>
#include <stdlib.h>

void intercambia(int *a, int *b);
void intercambia2(int *a, int *b);

int main() {
    int *a, *b;
    int x=1, y=2;
    a = &x;
    b = &y;
    intercambia2(a, b);
    printf("%d / %d \n", *a, *b);

      system("PAUSE");
      return 0;
}

void intercambia(int *a, int *b)
{
    int *tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void intercambia2(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

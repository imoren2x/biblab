#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 5;
    int number2;
    double fnumber;
    double fnumber2 = 2.00;

    printf("%d\n",number);
    fnumber = (double)number;
    printf("%f\n",fnumber);
    number2 = (int)fnumber2;
    printf("%d\n",number2);

      system("PAUSE");
      return 0;
}

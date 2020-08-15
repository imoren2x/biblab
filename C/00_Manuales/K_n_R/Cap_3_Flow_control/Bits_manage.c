//Section 2.9 Bits managing//


#include <stdio.h>
#include <stdlib.h>

int main()
{
 int number1, number2;
 int n, p;
 unsigned x;
 unsigned result;

 printf("Write an integer number:\n");
 printf(">>");
 scanf("%d", &number1);

 printf("\n");
 printf("You've chosen number %d\n",number1);
 number2 = number1 & 0xABCF;

 printf("New number: %d\n",number2);
 printf("C1 number: %d\n",~number1);

 printf("Write the number to obtain n bits from position p:\n >>");
 scanf("%d",&x);
 printf("\n");
 printf("Number of bits you desire:\n>>");
 scanf("%d",&n);
 printf("Initial position you want to take:\n>>");
 scanf("%d",&p);
 printf("The result is: %d\n", ( x >> (p+1-n) ) & ~( ~0 << n ) );



 system("pause");
 return 0;
}

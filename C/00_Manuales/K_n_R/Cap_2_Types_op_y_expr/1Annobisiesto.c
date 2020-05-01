//Programme that tells you if a year is a leap year//
// A year is leap if it's multiple of four but not multiple of a hundred//
//  or if it's divisible by four hundred//
#include <stdio.h>
#include <stdlib.h>

int main()
{
 int year;
 int end = 0;
 char yesno;

 while (end == 0)
 {
    fflush(stdin); //To clean previous values//
    printf("Write any year and you will know if it's a leap year:\n");
     printf(">>");
     scanf("%d",&year);

     if ( ( ( year % 4 == 0 ) && ( year % 100 != 0 ) ) || ( year % 400 == 0) )
     {
        printf("Year %d is leap.\n", year);
     }
     else
     {
        printf("Year %d is not leap.\n",year);
     }

    fflush(stdin); //To clean stdin values//
    printf("Do you want to try another year?(Y/N)\n");
    printf(">>");
    scanf("%c",&yesno);
    switch(yesno)
    {
        case 'n': case 'N': end = 1; break;
        case 'y': case 'Y': end = 0; break;
        //default: end = 1; break;
    }

    //fflush(stdout);

 }
      system("PAUSE");
      return 0;
}

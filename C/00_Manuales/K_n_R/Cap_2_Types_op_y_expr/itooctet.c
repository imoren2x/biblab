#include <stdio.h>
#include <stdlib.h>

#ifndef MAXSIZE
    #define MAXSIZE 400
#endif

char digittooctet ( int digit );

 char* itooctet( const int number )
 {
    char *octetstring1 = calloc(MAXSIZE, sizeof(char));
    char *octetstring2 = calloc(MAXSIZE, sizeof(char));
    int remainder;
    int dividend = number;
    int index = 0;
    int octetdigit;
    int stringlength = index;

    while ( dividend != 0 )
    {
        remainder = (dividend % 8); // take the Least significant remainder
        //printf("Dividend: %d\n",dividend);
        //printf("[itooctet] [%d iteration] Remainder %d\n",index,remainder);
        dividend = dividend / 8;//(int) floor( ( (double) dividend ) / 8.0); //reduces its value
        //printf("Dividend: %d\n",dividend);
        octetstring1[index++] = digittooctet(remainder); // converts digit to octet
        //printf("%c\n",digittooctet(remainder));
        //system("pause");
    }
    printf("\n");
    octetstring1[index--] = '\0';

//    int stringlength = index; //You can't define here a variable.

    stringlength = index;

    while (index >= 0)
    {
        octetstring2[stringlength-index] = octetstring1[index];
        //printf("[itooctet] [%d iteration] octet digit '%c'\n",(stringlength-index),octetstring2[stringlength-index]);
        index--;
        //system("pause");
    }
    octetstring2[stringlength+1] = '\0';
    return octetstring2;
    //return octetstring1;
 }

 char digittooctet ( int digit )
 {
 switch (digit)
    {
        case 0: return '0'; break;
        case 1: return '1'; break;
        case 2: return '2'; break;
        case 3: return '3'; break;
        case 4: return '4'; break;
        case 5: return '5'; break;
        case 6: return '6'; break;
        case 7: return '7'; break;
        default: printf("[digittooctet] Unexpected error!!"); break;
    }

 }

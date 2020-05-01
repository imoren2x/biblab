#include <stdio.h>
#include <stdlib.h>

#ifndef MAXSIZE
    #define MAXSIZE 400
#endif

char digittohex ( int digit );

 char *itohex( int number )
 {
    char *hexstring1 = calloc(MAXSIZE, sizeof(char));
    char *hexstring2 = calloc(MAXSIZE, sizeof(char));
    int remainder;
    int dividend = number;
    int index = 0;
    int hexdigit;
    int stringlength = index;

    while ( dividend != 0 )
    {
        remainder = (dividend % 16); // take the Least significant remainder
        dividend = dividend / 16;//(int) floor( ( (double) dividend ) / 8.0); //reduces its value
        hexstring1[index++] = digittohex(remainder); // converts digit to octet
    }
    printf("\n");
    hexstring1[index--] = '\0';

//    int stringlength = index; //You can't define here a variable.

    stringlength = index;

    while (index >= 0)
    {
        hexstring2[stringlength-index] = hexstring1[index];
        //printf("[itooctet] [%d iteration] octet digit '%c'\n",(stringlength-index),octetstring2[stringlength-index]);
        index--;
        //system("pause");
    }
    hexstring2[stringlength+1] = '\0';
    return hexstring2;
    return hexstring1;
 }
 char digittohex ( int digit )
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
        case 8: return '8'; break;
        case 9: return '9'; break;
        case 0xA: return 'A'; break;
        case 0xB: return 'B'; break;
        case 0xC: return 'C'; break;
        case 0xD: return 'D'; break;
        case 0xE: return 'E'; break;
        case 0xF: return 'F'; break;
        default: printf("[digittooctet] Unexpected error!!"); break;
    }

 }
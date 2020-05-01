//This program converts an integer number (base 10) into a binary number, //
//  octetstring and hexstring//
#include <stdio.h>
#include <stdlib.h>

#include "itooctet.c"
#include "itohex.c"

#ifndef MAXSIZE
    #define MAXSIZE 400
#endif

const int A = 0xA;
const int B = 0xB;
const int C = 0xC;
const int D = 0xD;
const int E = 0xE;
const int F = 0xF;

int main()
{
 //variables
 char* string = calloc(MAXSIZE,sizeof(char));
 char* octetstring = calloc(MAXSIZE,sizeof(char));
 char* hexstring = calloc(MAXSIZE,sizeof(char));
 int number;


 //body
 printf("Write an integer number (base 10):\n");
 printf(">>");
 scanf("%s",string);
 printf("\n\n");
 printf("It's length is: %d\n",strlen(string));
 printf("\n");

 number = atoi(string);
 printf("The number as an integer value is %d\n\n",number);

 octetstring = itooctet(number);

 //octetstring = "377";

 printf("The length of the octetstring is: %d\n",strlen(octetstring));

 printf("The number as an octetstring is: 0%s\n", octetstring);

 hexstring = itohex(number);
 printf("The number as an hextring is: 0x%s\n",hexstring);

      system("PAUSE");
      return 0;
} //end main()





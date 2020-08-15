//Simple menu//
/////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

//Types definition
typedef enum bool_e{false, true} bool;

int main()
{
 //Variables//
 bool end = false;
 char option;

 //Body programme//
 while (!end)  //you must use parentheses
 {
    printf("Simple menu\n");
    printf("-----------\n\n");
    printf("1. Option 1.\n");
    printf("2. Option 2.\n");
    printf("3. Option 3.\n");
    printf("4. Exit.\n");
    printf("\n");
    printf("Which option do you want?\n");
    printf("\n>>");
    //option = getchar(); //returns an integer
    scanf("%s",&option); //another alternative to get the value option
    printf("You have selected: %c", option);
//    putchar(option); // it doesn't work
    printf("\n");
    switch(option)
    {
        case '1': case '2': case '3': end = false; break;
        case '4': end = true; break;
        default : printf("\n Non-possible option\n\n"); break;
    }
    printf("\n");
 }


 system("PAUSE");
 return 0;
}

//This programme reverses a string order//
//#include <ANSIlib.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 1001

void reverse_string(char *s);

int main()
{
    char *s = (char*)calloc(MAX,sizeof(char));
    char *s2 = (char*)calloc(MAX,sizeof(char));

    printf("Write the string you want to reverse:\n >>");
    //scanf("%s",s);
	gets(s);

    reverse_string(s);

    printf("\n%s\n\n",s);

    system("pause");
 return 0;
}

void reverse_string(char *s)
{
     char c;
     int i, j;

     for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
     {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
     }
 }

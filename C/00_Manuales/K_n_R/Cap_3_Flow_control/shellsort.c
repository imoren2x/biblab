//This programme implements a Shellsort algorithm//
//(Developed by D. L. Shell in 1959//
//#include <ANSIlib.h>
#include <stdio.h>
#include <stdlib.h>

#define LENGTH 10

void shellsort(int *v);

int main()
{
    int *v = (int*)calloc(LENGTH,sizeof(int));
    int i;
    v[0] = 10;
    v[1] = 9;
    v[2] = 8;
    v[3] = 7;
    v[4] = 6;
    v[5] = 5;
    v[6] = 4;
    v[7] = 3;
    v[8] = 2;
    v[9] = 1;
    
    printf("This is the vector to be sorted:\n>>");
    for (i = 0; i < LENGTH; i++)
    {
        printf("%d ",v[i]);
    }
    printf("\n");
    shellsort(v);
    printf("And this is the vector already sorted:\n>>");
    for (i = 0; i < LENGTH; i++)
    {
        printf("%d ",v[i]);
    }
    
        
    printf("\n");
    system("pause");
    return 0;
}



void shellsort(int *v)
{
     int gap, i, j, temp, n;
     
     n = LENGTH;
     
     for (gap = n/2; gap > 0; gap /= 2)
     {
         for (i = gap; i < n; i++)
         {
             for (j = i - gap; j >= 0 && v[j] > v[j+gap]; j-=gap)
             {
                 temp = v[j];
                 v[j] = v[j+gap];
                 v[j+gap] = temp;
             }
         }
     }
 }

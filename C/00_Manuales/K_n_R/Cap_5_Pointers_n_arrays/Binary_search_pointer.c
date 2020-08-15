//This program implements binary search//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 13

typedef enum bool_e{false,true} bool;

typedef struct searchresult_s{
        bool boolresult;
        int index; // 0 in case of false.
    }searchresult_t;

searchresult_t binsearch(int array[], int number);

int main()
{
    int number;
    int **list = (int**)calloc(MAX,sizeof(int*));
    int array[MAX] = {-5,-4,-3,-2,-1,0,1,2,3,4,5,6,7};
    searchresult_t result;
    int index;
    int *component = (int*)calloc(1,sizeof(int));
    *component = 5;

    for (index = 0; index <= MAX; index++)
    {
        //list = &component;
        //*component = index;
        //printf("%d",**list);
        *list = (int*)calloc(1,sizeof(int));
        *list = component;
        printf("%d\n",**list);
        //list[0] = component;
    }
    system("pause");
    printf("Write the number to look up:\n>>");
    scanf("%d",&number);

    result = binsearch(array,number);

    if (result.boolresult == true)
    {
        printf("\nYes, %d was found in position %d\n",number,result.index);
    }

      system("PAUSE");
      return 0;
}

searchresult_t binsearch(int array[], int number)
{
    int length = MAX;
    int low = 0;
    int mid;
    int high = length;
    int temp;
    double ftemp;
    searchresult_t result;

    //printf("%d\n",high);
//    printf("%d\n",
    //printf("%d\t%d\n",low,high);

    while (low <= high)
    {
        temp = ( low + high ) / 2;
        //printf("\n%d",temp);
        ftemp = (double)temp;
        mid = (int)ceil( ftemp ); //casting as a good practice
        //printf("Mid:%d\n",mid);
        //system("pause");
        if ( number < array[mid] ) //if number is lower than medium number,
        {
            high = mid - 1; //shorten the list to lower half-list.
        }
        else if ( number > array[mid]) //if number is greater than medium number,
        {
            low = mid + 1; //shorten the list ot upper half-list.
        }
        else if ( number == array[mid] ) //number has been found.
        {
            result.boolresult = true;
            result.index = mid;

            return result;
        }
        else{printf("Unexpected error!!");}
    }
    if (result.boolresult != true)
    {
        result.boolresult = false;
    }
}

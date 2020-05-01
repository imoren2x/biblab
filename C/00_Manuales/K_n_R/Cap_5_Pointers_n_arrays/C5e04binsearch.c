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
    const int k = 5;
    int number;
    int **list = (int**)calloc(1,sizeof(int*));
    int array[MAX] = {-5,-4,-3,-2,-1,0,1,2,3,4,5,6,7};
    searchresult_t result;
    int index;
    int *component = (int*)calloc(MAX,sizeof(int));
    int *ptr;
    //*component = 5;

    //*list[0] = component;

    //printf("%d\n",&**list); //no problem
    //printf("%d\n",*list[1]); //problem

    for (index = 0; index <= MAX-1; index++)
    {
        component[index] = index;
        printf("%d\n",component[index]);
    }

    *ptr = (int*)malloc(sizeof(int));
    *ptr = index;
    //**list = (int**)index;
    //printf("%d\n", **list); //problem
    printf("%d\n",*ptr);

    if (**list = NULL)
    {
        printf("Yes, it points to NULL.\n");
    }
    else printf("No, it doesn't point to NULL.\n");


    system("pause");
    return 0;

}

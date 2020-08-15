/* C5e04
 * Esta función trabaja los punteros y los punteros a punteros (dobles punteros)

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
 int *ptr = (int*)calloc(1,sizeof(int));
 int index = 5;
 int **ptrptr = (int**)calloc(1,sizeof(int*));


 *ptr = 5;
 printf("%d\n",*ptr);

 ptrptr[0] = (int*)calloc(1,sizeof(int));
 **ptrptr = 10;
 printf("%d\n",**ptrptr);

 ptrptr = &ptr;
 printf("%d\n",**ptrptr);


      system("PAUSE");
      return 0;
}

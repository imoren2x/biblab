#include <stdio.h>
//#include <stdlib.h>

#define B_TEST 0
//#define TEST

void swap(int v[], int i, int j);
void qsort(int v[], int left, int right);

int main(int argc, char *argv[])
{
    int i_n;

    if (B_TEST)
    {
        i_n = 5;
    }
    else
    {
        printf("\n ¿Cuántos elementos desea insertar?");
        printf("\n >> ");
        scanf("%d", &i_n);
    }


    int i_i = 0;
    int a_elem[i_n-1];
    if (B_TEST)
    {
        a_elem[0] = 5;
        a_elem[1] = 4;
        a_elem[2] = 3;
        a_elem[3] = 2;
        a_elem[4] = 1;
    }
    else
    {
        for (i_i = 0; i_i <= i_n; i_i++)
        {
            printf("\n Inserta el %d-esimo elemento.", i_i);
            printf("\n >> ");
            scanf("%d", &a_elem[i_i]);
        }
    }

    int left = 0;
    int right = i_n;
    qsort(a_elem, left, right);
    for (i_i = left; i_i <= right; i_i++)
    {
        printf("\n %d", a_elem[i_i]);
    }

  printf("\n");
  system("PAUSE");
  return 0;

}

/* qsort: sort v[left]...v[right] into increasing order */
/**
a recursive sorting algorithm developed by C.A.R.
Hoare in 1962.
*/
void qsort(int v[], int left, int right)
{
    int i, last;
    void swap(int v[], int i, int j);
    if (left >= right) /* do nothing if array contains */
    {
       return; /* fewer than two elements */
    }
    swap(v, left, (left + right)/2); /* move partition elem */
    last = left; /* to v[0] */
    for (i = left + 1; i <= right; i++) /* partition */
    {
        if (v[i] < v[left])
        {
            swap(v, ++last, i);
        }
    }
    swap(v, left, last); /* restore partition elem */
    qsort(v, left, last-1);
    qsort(v, last+1, right);

}

/* swap: interchange v[i] and v[j] */
void swap(int v[], int i, int j)
{
    int temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

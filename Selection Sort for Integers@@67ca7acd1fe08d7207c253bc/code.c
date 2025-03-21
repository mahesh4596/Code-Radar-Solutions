#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int getMinLoc(int ary[], int beg, int size) 
{
    int min = ary[beg], loc = beg;
    for (int i = beg; i < size; i++) 
    {
        if (min > ary[i]) 
        {
            min = ary[i];
            loc = i;
        }
    }
    return loc;
}

void selectionSort(int ary[], int size) 
{
    for (int j = 0; j < size - 1; j++) 
    {
        int loc = getMinLoc(ary, j, size);
        swap(&ary[j], &ary[loc]);
    }
}

void printArray(int ary[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",ary[i]);
}

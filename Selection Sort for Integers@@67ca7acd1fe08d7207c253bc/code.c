#include <stdio.h>

int selectionSort(int arr[],int n)
{
    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n-1-r;c++)
        {
            if(arr[c]>arr[c+1])
            {
                int temp=arr[c];
                arr[c]=arr[c+1];
                arr[c+1]=temp;
            }
        }
    }
}

int printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
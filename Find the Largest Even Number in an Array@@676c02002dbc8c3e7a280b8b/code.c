#include <stdio.h>
#include <limits.h>

int LargestEven(int arr[],int n)
{
    int max = INT_MIN;
    for(int i=0;i < n;i++)
    {
        if(arr[i] % 2 == 0)
        {
            if(max < arr[i])
                max = arr[i];
        }
    }
    if(max == INT_MIN)
        return -1;
    else
        return max;
}

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("%d",LargestEven(arr,n));
}
#include <stdio.h>
#include <limits.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int arr[n], retarr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) 
    {
        int max = INT_MIN;
        for(int j = i + 1; j < n; j++) 
        {
            if(arr[j] > max) 
            {
                max = arr[j];
            }
        }
        retarr[i] = (max == INT_MIN) ? -1 : max;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", retarr[i]);

    return 0;
}

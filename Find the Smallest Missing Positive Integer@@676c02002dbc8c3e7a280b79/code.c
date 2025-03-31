#include <stdio.h>

int findSmallestMissing(int arr[], int n) 
{
    int present[n];
    for (int i = 0; i < n; i++) 
        present[i] = 0; 

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > 0 && arr[i] <= n) 
            present[arr[i]] = 1; 
    }

    for (int i = 0; i < n; i++) 
    {
        if (present[i] == 0)
            return i;
    }

    return n + 1;
}

int main() 
{
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("%d\n", findSmallestMissing(arr, n));
    return 0;
}

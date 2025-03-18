#include <stdio.h>

int findSmallestMissing(int arr[], int n) 
{
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == mid + 1)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return left + 1;
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

#include <stdio.h>

void findLeaders(int arr[], int n) 
{
    int max_right = arr[0]; 

    for (int i = n - 2; i >= 0; i--) 
    {  
        if (arr[i] >= max_right) 
        {  
            max_right = arr[i];  
            printf("%d ", max_right);
        }  
    }
    printf("%d %d",arr[n-2],arr[n-1]);  
}

int main() 
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    findLeaders(arr, n);
    return 0;
}

#include <stdio.h>

int findPeak(int ary[], int n) 
{
    int beg = 0, end = n - 1;
    
    while (beg < end) 
    {
        int mid = (beg + end) / 2;

        if (ary[mid] > ary[mid + 1])
            end = mid;
        else if (ary[mid] < ary[mid + 1])
            beg = mid + 1;
        else
            end--;
    }
    return ary[beg];
}

int main() 
{
    int n;
    scanf("%d", &n);
    int ary[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d", &ary[i]);

    printf("%d", findPeak(ary, n));
    return 0;
}

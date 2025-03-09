#include <stdio.h>

int findPeak(int ary[], int n) {
    int beg = 0, end = n - 1;
    
    while (beg < end) {
        int mid = beg + (end - beg) / 2;

        if (ary[mid] > ary[mid + 1]) 
            end = mid;  
        else if (ary[mid] < ary[mid + 1]) 
            beg = mid + 1;
        else if(ary[mid] == ary[mid+1] && ary[mid]==ary[mid-1])
            return -1;
        else
        { 
            if (ary[beg] == ary[mid] && ary[end] == ary[mid]) 
            {
                beg++;
                end--;
            } 
            else if (ary[beg] < ary[mid]) 
            {
                beg = mid;
            } 
            else 
            {
                end = mid;
            }
        }
    }
    return ary[beg];
}

int main() {
    int n;
    scanf("%d", &n);
    int ary[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &ary[i]);

    printf("%d", findPeak(ary, n));
    return 0;
}

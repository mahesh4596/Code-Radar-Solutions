
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int kthSmallest(int ary[], int n, int k) {
    for (int i = 0; i < k; i++) 
    { 
        int minIndex = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (ary[j] < ary[minIndex]) 
            {
                minIndex = j;
            }
        }
        swap(&ary[i], &ary[minIndex]);
    }
    return ary[k - 1]; 
}

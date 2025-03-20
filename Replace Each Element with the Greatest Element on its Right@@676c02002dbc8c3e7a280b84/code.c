#include <stdio.h>

int main() {
    void REWGETR(int *rp, int *p, int n);
    int n, k;
    scanf("%d", &n);
    int arr[n], i, j;
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

    int retarr[n];
    REWGETR(&retarr[0], &arr[0], n);
    for(i=0;i<n;i++)
        printf("%d ", retarr[i]);
}

void REWGETR(int *rp, int *p, int n) {
    int i, j, max;
    for(i=0;i<n;i++) {
        max = INT_MIN;
        for(j=i+1;j<n;j++) {
            if (max<*(p+j)) max = *(p+j);
        }
        *(rp+i)=(max==-999999)?-1: max;
    }
}
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n], i, j;
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);

    for(i=0;i<n;i++) {
        if (arr[i]>=arr[i+1] && arr[i]>=arr[(i+2<n)?i+2: n-1])
        if (i!=n-1) printf("%d ", arr[i]);
    }
    printf("%d", arr[n-1]);   
}
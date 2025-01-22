#include <stdio.h>

int main() {
    int i,j,n;
    scanf("%i",&n);
    for(i=1;i<n;i--)
    {
        for(j=i;j<=n;j++)
            printf("%i",j);
    }
}
#include <stdio.h>

int main() {
    int i,j,n;
    scanf("%i",&n);
    for(i=0;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("* ");
        printf("\n");
    }
}
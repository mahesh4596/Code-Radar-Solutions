#include <stdio.h>

int main() {
    int i,j,n;
    scanf("%i",&n);
    for(i=0;i<=n;i++)
    {
        for(int k=n-i+1;k>=1;k++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("* ");
        for(int l=2;l<=i;l++)
            printf("*");
        printf("\n");
    }
}
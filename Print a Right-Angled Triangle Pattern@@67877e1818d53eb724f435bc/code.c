#include <stdio.h>

int main() {
    int r,c,n;
    scanf("%i",&n);
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
            printf("* ");
        printf("\n");
    }
}
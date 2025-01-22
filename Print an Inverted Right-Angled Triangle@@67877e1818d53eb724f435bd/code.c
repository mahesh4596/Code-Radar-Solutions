#include <stdio.h>

int main() {
    int r,c,n;
    scanf("%i",&n);
    for(r=n;r>=1;r--)
    {
        for(c=1;c<=r;c++)
            printf("* ");
        printf("/n");
    }
}
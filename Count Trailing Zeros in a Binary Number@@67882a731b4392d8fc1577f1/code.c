#include <stdio.h>

int main()
{
    int n,count = 0;
    scanf("%d",&n);
    
    if(n == 0)
    {
        printf("32");
        return 0;
    }

    while((n & 1) == 0)
    {
        count++;
        n>>=1;
    }
    printf("%d",count);
}
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
    unsigned int s = 1 << 31;
    while((n & s) == 0)
    {
        count++;
        s>>=1;
    }
    printf("%d",count);
}
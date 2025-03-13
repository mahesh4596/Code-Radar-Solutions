#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    
    if (!n) 
    {
        printf("-1\n");
        return 0;
    }
    
    while (n) 
    {
        ++count;
        if (n & 1)
            break;
        n = n >> 1;
    }
    
    printf("%d\n", count);
}

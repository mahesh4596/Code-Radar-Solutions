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
    
    while (!(n & 1)) 
    {  
        n = n >> 1;
        count++;
    }

    printf("%d\n", count);
    return 0;
}

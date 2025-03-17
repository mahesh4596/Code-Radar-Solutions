#include <stdio.h>
#include <limits.h>

int main() 
{
    int N;
    scanf("%d", &N);
    
    if (N < 2) 
    {
        printf("-1");
        return 0;
    }

    int ary[N];
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &ary[i]);
    }

    int firstMin = INT_MAX, secondMin = INT_MAX;
    
    for (int i = 0; i < N; i++) 
    {
        if (ary[i] < firstMin) 
        {
            secondMin = firstMin;
            firstMin = ary[i];
        } 
        else if (ary[i] < secondMin && ary[i] != firstMin) 
        {
            secondMin = ary[i];
        }
    }

    if (secondMin == INT_MAX) 
    {
        printf("-1");
    } 
    else 
    {
        printf("%d\n", secondMin);
    }

    return 0;
}

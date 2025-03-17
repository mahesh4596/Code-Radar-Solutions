#include <stdio.h>
#include <limits.h>

int main() 
{
    int N;
    scanf("%d", &N);
    
    if (N < 2) {
        printf("-1");
        return 0;
    }

    int ary[N];
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &ary[i]);
    }

    int firstMax = INT_MAX, secondMax = INT_MAX;
    
    for (int i = 0; i < N; i++) 
    {
        if (ary[i] > firstMax) 
        {
            secondMax = firstMax;
            firstMax = ary[i];
        } 
        else if (ary[i] > secondMax && ary[i] != firstMax) 
        {
            secondMax = ary[i];
        }
    }

    if (secondMax == INT_MIN) 
    {
        printf("-1");
    } else 
    {
        printf("%d\n", secondMax);
    }

    return 0;
}

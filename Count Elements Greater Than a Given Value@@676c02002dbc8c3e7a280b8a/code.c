#include <stdio.h>

void getFrequence(int ary[], int n,int a) 
{
    int counted[n]; 
    for (int i = 0; i < n; i++) 
    {
        counted[i] = 0;
    }

    int maxFreq = 0, maxElement = ary[0];

    for (int i = 0; i < n; i++) 
    {
        if (counted[i]) 
            continue;

        int count = 0;
        if (ary[i] > a) 
        {
            count++;
        }
    }
    printf("%d",count);
}

int main() 
{
    int n,a;
    scanf("%d %d", &n, &a);

    int ary[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &ary[i]);
    }

    getFrequence(ary, n, a);
    return 0;
}

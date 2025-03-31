#include <stdio.h>

void getFrequence(int ary[], int n,int a) 
{
    int count = 0;

    for (int i = 0; i < n; i++) 
    {
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

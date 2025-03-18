#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0;i<n;i++)
        scanf("%d",&ary[i]);
    for(int i=0;i<n;i++)
    {
        ary[i+1] += ary[(i+1==n)?n:i+1];
        printf("%d ",ary[i]);
    }
}
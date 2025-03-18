#include <stdio.h>

int main()
{
    int n,count;
    scanf("%d",&n);
    int ary[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    for(int i=0;i<n;i++)
        count+= (ary[i] == ary[n-1-i])?1:0;
    printf((count == n)?"YES":"NO");
}
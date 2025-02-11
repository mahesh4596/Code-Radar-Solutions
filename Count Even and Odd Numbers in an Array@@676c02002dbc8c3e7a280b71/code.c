#include <stdio.h>

void getevens(int ary[],int n)
{
    int co=0,ce=0;
    for(int i=0;i<n;i++)
    {
        if(ary[i]%2 == 0)
            ce++;
        else
            co++;
    }
    printf("%d %d",ce,co);
}

int main()
{
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    getevens(ary,n);
}
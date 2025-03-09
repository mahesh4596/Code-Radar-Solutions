#include <stdio.h>

void getFrequence(int ary[],int n)
{
    int c=1;
    for(int i=0;i<n;i++)
    {
        if(i<n-1 && ary[i]==ary[i+1])
            c++;
        else
        {
            printf("%d %d\n",ary[i],c);
            c=1;
        }
    }
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
    getFrequence(ary,n);
}
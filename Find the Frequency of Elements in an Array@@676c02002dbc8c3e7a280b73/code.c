#include <stdio.h>

void getFrequence(int ary[],int n)
{
    int c=1;
    for(int i=0;i<n;i++)
    {
        if(ary[i]==ary[i+1])
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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(ary[c+1]<ary[c])
            {
                int temp=ary[c];
                ary[c] = ary[c+1];
                ary[c+1]=temp;
            }
        }
    }
    getFrequence(ary,n);
}
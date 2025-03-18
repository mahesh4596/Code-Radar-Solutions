#include <stdio.h>

int main()
{
    int n,index=0;
    scanf("%d",&n);
    int ary[n],new_ary[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
        if(ary[i]!=0)
        {
            new_ary[index]=ary[i];
            index++;
        }
    }
    for(int i=index;i<n;i++)
        new_ary[i]=0;
    
    for(int i=0;i<n;i++)
        printf("%d ",new_ary[i]);
}
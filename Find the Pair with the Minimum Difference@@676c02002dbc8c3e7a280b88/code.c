#include <stdio.h>
#include <limits.h>

int main()
{
    int n,min=INT_MAX;
    scanf("%d",&n);
    int ary[n];
    
    if(n == 1)
    {
        printf("-1");
        return 0;
    }

    for(int i=0;i<n;i++)
        scanf("%d",&ary[i]);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((ary[j] - ary[i]) < min)
            {
                min = ary[j] - ary[i];
                printf("%d %d",ary[i],ary[j]);
            }
        }
    }
}
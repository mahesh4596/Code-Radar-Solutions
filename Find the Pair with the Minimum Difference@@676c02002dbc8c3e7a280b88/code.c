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

    for(int r=0;r<n;r++)
    {
        for(int c=i+1;c<n;c++)
        {
            if((ary[j] - ary[j]) > min)
            {
                min = ary[j] - ary[i];
                printf("%d %d",ary[i],ary[j]);
            }
        }
    }
}
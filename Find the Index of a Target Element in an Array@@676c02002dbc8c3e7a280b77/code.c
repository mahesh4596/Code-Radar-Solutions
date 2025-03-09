#include <stdio.h>

int getindex(int ary[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        if(ary[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    int n;
    scanf("%d",&n);

    int ary[n];
    for(int i=0;i<n;i++)
        scanf("%d",&ary[i]);

    int target;
    scanf("%d",&target);

    for(int r=0;r<n;r++)
    {
        for(int c=0;c<n-1-r;c++)
        {
            if(ary[c]>ary[c+1])
            {
                int temp = ary[c];
                ary[c] = ary[c+1];
                ary[c+1] = temp;
            }
        }
    }
    int res = getindex(ary,n,target);
    printf("%d",res);
}
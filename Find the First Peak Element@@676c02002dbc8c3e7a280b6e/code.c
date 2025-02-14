#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0;i<n;i++)
        scanf("%d",&ary[i]);
    int count = 1;
    for(int i = 0;i<n;i++)
    {
        if(ary[i] == ary[i+1])
            count++;
    }
    if(count == n - 1)
    {
        printf("-1");
        return 0;
    }
    int beg = 0,end = n - 1;
    while(beg<end)
    {
        int mid = (beg + end)/2;
        if(ary[mid]>ary[mid+1])
            end = mid;
        else
            beg = mid + 1;
    }
    printf("%d",ary[beg]);
}
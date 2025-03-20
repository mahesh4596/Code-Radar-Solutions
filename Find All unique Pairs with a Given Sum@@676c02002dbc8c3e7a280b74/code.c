#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int ary[n];
    for(int i=0;i<n;i++)
        scanf("%d",&ary[i]);

    int num;
    scanf("%d",&num);
    
    for(int i=0;i<n;i++)
    {
        if((ary[i] + ary[i+1]) == num)
        {
            printf("%d %d", ary[i],ary[i+1]);
        }
    }
}
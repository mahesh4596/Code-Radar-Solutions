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
        for(int j=i+1;j<n;j++)
        {
            if(ary[i] == ary[j])
            {
                printf("%d %d",ary[i],ary[j]);
                return 0;
            }
            if((ary[i] + ary[j]) == num)
                printf("%d %d\n", ary[i],ary[j]);
        }
    }
}
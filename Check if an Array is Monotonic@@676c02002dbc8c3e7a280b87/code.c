#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n == 1)
    {
        printf("NO");
        return 0;
    }

    int ary[n];
    for(int i=0;i<n;i++)
        scanf("%d ",&ary[i]);
    for(int i=0;i<n;i++)
    {
        for(int j = i + 1;j<n;j++)
        {
            if(ary[j] > ary[i] || ary[j] < ary[i])
            {
                printf("YES");
                return 0;
            }
            else if(ary[j] == ary[i])
            {
                printf("YES");
                return 0;
            }
            else 
            {
                printf("NO");
                return 0;
            }
        }
    }
}
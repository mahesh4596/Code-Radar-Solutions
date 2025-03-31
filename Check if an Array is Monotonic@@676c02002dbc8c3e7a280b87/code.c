#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int ary[n];
    for(int i=0;i<n;i++)
        scanf("%d ",&ary[i]);
    for(int i=1;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(ary[j] > ary[i])
            {
                printf("YES");
                return 0;
            }
            else if(ary[j] < ary[i])
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
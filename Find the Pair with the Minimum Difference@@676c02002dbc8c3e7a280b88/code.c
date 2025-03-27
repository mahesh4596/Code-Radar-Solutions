#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num1,num2;
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
        for(int c=0;c<n-1-r;c++)
        {
            if(ary[c] > ary[c+1])
            {
                int temp = ary[c];
                ary[c] = ary[c+1];
                ary[c+1] = temp;
            }
        }
    }

    int min = abs(ary[0] - ary[1]);
    for(int i = 0;i < n;i++)
    {
        int diff = abs(ary[i+1] - ary[i]);
        if(diff < min)
        {
            min = diff;
            num1 = ary[i];
            num2 = ary[i+1];
        }
    }
    printf("%d %d",num1,num2);
}
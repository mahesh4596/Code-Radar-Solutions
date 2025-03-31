#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int ary[n];
    for(int i = 0;i < n;i++)
        scanf("%d ",&ary[i]);
    
    for(int r = 0;r < n;r++)
    {
        for(int c = 0;c < n - 1 - r;c++)
        {
            if(ary[c] > ary[c+1])
            {
                int temp = ary[c];
                ary[c] = ary[c+1];
                ary[c+1] = temp;
            }
        }
    }

    int maxlen = 1, currlen = 1;
    for(int i = 0;i < n;i++)
    {
        if(ary[i] == ary[i - 1])
            continue;
        else if(ary[i] == ary[i - 1] + 1)
            currlen++;
        else 
            currlen = 1;
        if(currlen > maxlen)
            maxlen = currlen;
    } 
    printf("%d",maxlen);
}
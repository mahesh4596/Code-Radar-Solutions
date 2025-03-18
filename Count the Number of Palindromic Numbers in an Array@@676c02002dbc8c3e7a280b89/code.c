#include <stdio.h>

int palidromic(int num)
{
    int rev=0,r;
    int n = num;
    while(n<0)
    {
        r = n%10;
        rev = (rev*10)+r;
        n = n/10;
    }
    if(rev == num)
        return 1;
    else
        return 0;
}

int main()
{
    int n,count = 0;
    scanf("%d",&n);
    int ary[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
        count += palidromic(ary[i]);
    }
    printf("%d",count);
}
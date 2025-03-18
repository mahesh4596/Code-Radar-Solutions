#include <stdio.h>

int digitSum(int num)
{
    int sum=0,r;
    while(num!=0)
    {
        r = num%10;
        sum +=r;
        num=num/10;
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
        ary[i] = digitSum(ary[i]);
    }
    for(int i=0;i<n;i++)
        printf("%d ",ary[i]);
}
#include <stdio.h>

int digitSum(int num)
{
    int sum=0,r;
    while(num!=0)
    {
        r = r%10;
        sum = (sum*10)+r;
        num=num/10;
    }
    return sum;
}

int main()
{
    int n,count=0;
    scanf("%d",&n);
    int ary[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
        count = digitSum(ary[i]);
        printf("%d ",count);
    }
}
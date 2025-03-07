#include <stdio.h>

int main()
{
    int n,i,bit;
    scanf("%d %d",&n,&i);
    bit = (n>>i) & 1;
    printf("%d",bit);
}
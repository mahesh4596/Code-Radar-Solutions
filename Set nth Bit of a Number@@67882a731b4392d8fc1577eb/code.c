#include <stdio.h>

int main()
{
    int number,n;
    scanf("%d %d",&number,&n);
    number = number | (1<<n);
    printf("%d",number);
}
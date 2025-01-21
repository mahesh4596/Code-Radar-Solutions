#include <stdio.h>

int main() {
    int n,i,jasoos=1;
    scanf("%i",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            jasoos=0;
            break;
        }
    }
    if(jasoos==1)
        printf("Prime");
    else
        printf("Not Prime");
}
#include <stdio.h>

int main() {
    int sum,i,n;
    scanf("%i",&n);
    for(i=0;i<=n;i++)
        sum+=i;
    printf("%i",sum);
}
#include <stdio.h>

int main() {
    int n;
    scanf("%i",&n);
    for(int i=1;i<=10;i++)
        printf("%i x %i = %i\n",n,i,n*i);
}
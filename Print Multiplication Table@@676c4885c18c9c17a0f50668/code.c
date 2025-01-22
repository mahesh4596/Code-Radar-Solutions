#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%i",&n);
    for(int i=1;i<=10;i++)
        printf("%i x %i = %i",n,i,n*i);
}
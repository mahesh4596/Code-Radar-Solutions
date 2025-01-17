#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%i%i",&a,&b);
    c = a + b;
    printf("sum: %i",c);
}
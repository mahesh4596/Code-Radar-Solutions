#include <stdio.h>

int main() {
    int a,b;
    scanf("%i %i",&a,&b);
    if(a>0 || b>0)
        printf("True");
    else
        printf("False");
}
#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%i %i %i",&a,&b,&c);
    (a>b?a>c?printf("%i",a):printf("%i",c):b>c?printf("%i",b):printf("%i",c));
}
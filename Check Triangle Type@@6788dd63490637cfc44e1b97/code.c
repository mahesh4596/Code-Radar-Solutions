#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%i %i %i",&a,&b,&c);
    if(a==b && b==c)
        printf("Equilateral");
    else if(a==b || a==c || b==c)
        printf("Isosceles");
    else
        printf("Scalene");
}
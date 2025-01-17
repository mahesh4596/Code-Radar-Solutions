#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float r,a;
    scanf("%f",&r);
    a = 3.14 * r * r;
    printf("Area: %.2f",a);
}
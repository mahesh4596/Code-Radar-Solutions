#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b,c,d;
    scanf("%f%f%f",&a,&b,&c);
    d = (a+b+c)/3;
    printf("Average: %.2f",d);
}
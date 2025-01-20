#include <stdio.h>

int main() {
    int a;
    scanf("%i",&a);
    if(a%5==0)
        printf("Divisible");
    else
        printf("Not Divisible");
}
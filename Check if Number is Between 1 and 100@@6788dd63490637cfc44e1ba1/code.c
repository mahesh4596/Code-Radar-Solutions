#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%i",&a);
    if(a>=1 && a<=100)
        printf("In Range");
    else
        printf("Out of Range");
}
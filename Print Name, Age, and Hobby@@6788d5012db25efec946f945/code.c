#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char n[100],h[100];
    int a;
    scanf("%s %i",&n,&a);
    scanf("%s",&h);
    printf("Name: %s",n);
    printf("\nAge: %i",a);
    printf("\nHobby: %s",h);
}
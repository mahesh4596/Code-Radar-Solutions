#include <stdio.h>

int main() {
    float a,b;
    char choice;
    scanf("%f %f %c",&a,&b,&choice);
    switch(choice)
    {
        case '+':
            printf("%f",a+b);
            break;
        case '-':
            printf("%f",a-b);
            break;
        case '/':
            printf("%f",a/b);
            break;
        case '*':
            printf("%f",a*b);
            break;
        default:
            printf("error");
    }
}
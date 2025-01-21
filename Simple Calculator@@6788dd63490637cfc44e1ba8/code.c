#include <stdio.h>

int main() {
    char choice;
    int a,b;
    scanf("%c",&choice);
    switch(choice)
    {
        case '+':
            scanf("%i %i",&a,&b);
            printf("%i",a+b);
            break;
        case '-':
            scanf("%i %i",&a,&b);
            printf("%i",a-b);
            break;
        case '/':
            scanf("%i %i",&a,&b);
            printf("%i",a/b);
            break;
        case '*':
            scanf("%i %i",&a,&b);
            printf("%i",a*b);
            break;
        default:
            printf("error");
    }
}
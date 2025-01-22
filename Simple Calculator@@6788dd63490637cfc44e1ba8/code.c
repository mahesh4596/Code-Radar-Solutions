#include <stdio.h>

int main() {
    float a,b;
    char choice;
    scanf("%f %f %c",&a,&b,&choice);
    switch(choice)
    {
        case '+':
            printf("%.0f",a+b);
            break;
        case '-':
            printf("%.0f",a-b);
            break;
        case '/':
            if (b==0)
                printf("");
            break;
        case '*':
            printf("%.0f",a*b);
            break;
        default:
            printf("error");
    }
}
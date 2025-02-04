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
            if(a>b)
                printf(".0f",a-b);
            else
                printf("error");
        case '/':
            if (a==0 || b==0)
                printf("error");
            else
                printf("%.0f",a/b);
            break;
        case '*':
            printf("%.0f",a*b);
            break;
        default:
            printf("error");
    }
}
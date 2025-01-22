#include <stdio.h>

int main() {
    float a,b;
    char choice;
    scanf("%f %f %c",&a,&b,&choice);
    switch(choice)
    {
        case '+':
            if(a<0 || b<0)
                printf("");
            else
                printf("%.0f",a+b);
            break;
        case '-':
            if (a<b)
                printf("");
            else
                printf("%.0f",a-b);
            break;
        case '/':
            if (a==0 || b==0)
                printf("");
            else
                printf("%.0f",a/b);
            break;
        case '*':
            if(a==0 || b==0)
                printf("");
            else
                printf("%.0f",a*b);
            break;
        default:
            printf("");
    }
}
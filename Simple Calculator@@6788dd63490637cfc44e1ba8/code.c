#include <stdio.h>

int main() {
    char choice;
    float a,b;
    scanf("%f %f %c",&a,&b,&choice);
    switch(choice)
    {
        case '+':
          printf("%i",a+b);
          break;
        case '-':
          printf("%i",a-b);
          break;
        case '/':
          printf("%i",a/b);
          break;
        case '*':
          printf("%i",a*b);
          break;
        default:
          printf("error");
    }
}
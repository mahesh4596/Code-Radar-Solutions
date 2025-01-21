#include <stdio.h>

int main() {
    char choice;
    int a,b;
    scanf("%i %i",&a,&b);
    scanf("%c",&choice);
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
#include <stdio.h>

int main() {
    char choice;
    int a,b;
    scanf("%i %i %c",&a,&b,&choice);
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
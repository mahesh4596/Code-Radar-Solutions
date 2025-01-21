#include <stdio.h>

int main() {
    int a,b;
    scanf("%i %i",&a,&b);
    if(a>0 && b>0)
        printf("Same Sign");
    else if(a<0 && b<0)
        printf("Same Sign");
    else
        printf("Different Sign");
}
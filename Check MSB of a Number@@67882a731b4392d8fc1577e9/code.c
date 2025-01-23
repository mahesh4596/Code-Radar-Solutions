#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a & (1<<31))
        printf("Set");
    else
        printf("Not Set");
    if((a>>31) == 1)
        printf("Set");
    else
        printf("Not Set");
}
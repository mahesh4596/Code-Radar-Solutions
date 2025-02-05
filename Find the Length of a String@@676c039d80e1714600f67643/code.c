#include <stdio.h>

int main() {
    char str[100];
    int i;
    scanf("%s",&str);
    for(i=0;str[i]!='\o';i++);
    printf("%d",i);
}
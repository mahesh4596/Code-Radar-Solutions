#include <stdio.h>

int main() {
    char str[100];
    int i;
    fgets(str, sizeof(str), stdin);
    for(i=0;str[i]!='\0';i++);
    printf("%d",i);
}
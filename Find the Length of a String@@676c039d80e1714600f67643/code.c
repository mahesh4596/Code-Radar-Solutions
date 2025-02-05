#include <stdio.h>

int main() {
    char str[100];
    int i;
    fgets(str);
    for(i=0;str[i]!='\0';i++);
    printf("%d",i);
}
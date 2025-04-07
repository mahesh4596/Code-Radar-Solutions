#include <stdio.h>
#include <string.h>

int main() {
    char str[10000];
    fgets(str, sizeof(str), stdin);
    int count=0;
    for(int i=0;i<strlen(str);i++) {
        if (str[i] == ' ' && str[i+1]!=' ' && str[i-1]!=' ') 
            count++;
    }
    if (count==0 && str[0]==' ') 
        printf("0");
    else 
        printf("%d", count+1);
}
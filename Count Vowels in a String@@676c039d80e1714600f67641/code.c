#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int v=0;
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\o';i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || 
        str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || 
        str[i] == 'O' || str[i] == 'U')
            v++;
    }
    printf("%d",v);
}
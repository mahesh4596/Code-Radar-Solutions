#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int v=0;
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\o';i++)
    {
        switch(str[i])
        {
            case 'A': 
            case 'a':
            case 'E': 
            case 'e':
            case 'I': 
            case 'i':
            case 'O': 
            case 'o':
            case 'U': 
            case 'u':
                v++;
                break;
            default:
                break;
        }
    }
    printf("%d",v);
}
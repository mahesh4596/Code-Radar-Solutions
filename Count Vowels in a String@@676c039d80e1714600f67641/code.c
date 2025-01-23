#include <stdio.h>

int main() {
    char str[100],v=0;
    scanf("%s",&str);
    for(int i=0;str[i]!='\o';i++)
    {
        switch(str[i])
        {
            case 'A': case 'a':
            case 'E': case 'e':
            case 'I': case 'i':
            case 'O': case 'o':
            case 'U': case 'u':
            v++;
            break;
        }
    }
    printf("%d",v);
}
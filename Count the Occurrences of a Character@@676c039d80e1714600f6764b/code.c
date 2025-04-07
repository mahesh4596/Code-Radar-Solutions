#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100],s[1];
    int v=0;
    fgets(str,sizeof(str),stdin);
    fgets(s,sizeof(s),stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] == s[0])
            v++;
    }
    printf("%d",v);
}
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    
    for(int i = 0; str[i] != '\0'; i++)
    {
        if((!(str[i] >= 65)) || ((str[i] <= 56)))
            printf("%c",str[i]);
        else
            printf("%c",str[i] - 32);
    }
}
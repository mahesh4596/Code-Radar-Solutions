#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int jasoos = 1;
    fgets(str,sizeof(str),stdin);
    for(int i = 0; str[i] != '0'; i++)
    {
        if(str[i] != '1' && str[i] != '0')
        {
            jasoos = 0;
            break;
        }
        if(str[i] == str[i + 1])
        {
            printf("Yes");
            return 0;
        }
    }
    if(jasoos == 1)
        printf("Yes");
    else 
        printf("No");
}
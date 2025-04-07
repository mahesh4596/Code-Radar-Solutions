#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int jasoos = 1;

    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != '0' && str[i] != '1')
        {
            jasoos = 0;
            break;
        }
    }

    if(jasoos)
        printf("Yes");
    else 
        printf("No");

    return 0;
}

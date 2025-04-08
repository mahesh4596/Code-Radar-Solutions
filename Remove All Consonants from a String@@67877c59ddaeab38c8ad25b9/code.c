#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 47 && str[i] <= 56)
            printf("%c",str[i]);
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            printf("%c", str[i]);
    }
}

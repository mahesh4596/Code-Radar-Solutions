#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch;

    fgets(str, sizeof(str), stdin);
    scanf(" %c", &ch);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            str[i] = ch;
    }
    printf("%s", str);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            (ch < 'A') || (ch > 'Z' && ch < 'a') || (ch > 'z'))
        {
            printf("%c", ch);
        }
    }

    return 0;
}

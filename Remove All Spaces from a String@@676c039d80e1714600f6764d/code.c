#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    fgets(str, sizeof(str), stdin);

    int i, j = 0;
    char noSpaces[200];

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] != ' ') 
        {
            noSpaces[j++] = str[i];
        }
    }

    noSpaces[j] = '\0';

    printf("%s\n", noSpaces);
}

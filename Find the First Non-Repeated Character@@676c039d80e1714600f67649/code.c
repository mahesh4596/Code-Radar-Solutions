#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) 
    {
        int isUnique = 1;
        for (int j = 0; str[j] != '\0'; j++) 
        {
            if (i != j && str[i] == str[j]) 
            {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) 
        {
            printf("%c\n", str[i]);
            return 0;
        }
    }

    printf("-");
    return 0;
}

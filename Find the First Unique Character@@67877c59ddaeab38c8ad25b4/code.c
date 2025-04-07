#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) 
    {
        for(int j = i + 1; str[i] != '\0'; j++)
        {
            if(str[i] != str[j])
            {
                printf("%c",str[i]);
                return 0;
            }
        }
    }
}

#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    fgets(str, sizeof(str1), stdin);
    scanf("%c",&c);
    scanf("%c",&rc);

    for(int i = 0;str[i] != '\0';i++)
    {
        if(str[i] == c)
        {
            str[i] = rc;
        }
    }
    printf("%s",str);
}

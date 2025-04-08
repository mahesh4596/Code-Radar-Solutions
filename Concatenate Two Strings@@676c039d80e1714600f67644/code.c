#include <stdio.h>
#include <string.h>

int main()
{
    char str1[200], str2[100];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int len1 = strlen(str1);
    int i;

    for (i = 0; str2[i] != '\0'; i++)
        str1[len1 + i] = str2[i];
    str1[len1 + i] = '\0';

    printf("%s", str1);
    return 0;
}

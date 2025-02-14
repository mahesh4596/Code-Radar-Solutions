#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    int as1[256] = {0}, as2[256] = {0};

    int len = 0;
    while (s1[len] != '\0' && s1[len] != '\n') 
    {
        len++;
    }

    int len2 = 0;
    while (s2[len2] != '\0' && s2[len2] != '\n') 
    {
        len2++;
    }

    if (len != len2) 
    {
        printf("No\n");
        return 0;
    }

    for (int i = 0; i < len; i++) 
    {
        as1[(unsigned char)s1[i]]++;
        as2[(unsigned char)s2[i]]++;
    }
    
    for (int i = 0; i < 256; i++) 
    {
        if (as1[i] != as2[i]) 
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
}

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);

    int counted[n] ; 
    for (int i = 0; i < n; i++)
        counted[i] = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if (counted[i]) 
            continue;

        int count = 1;
        for(int j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
                counted[j] = 1;
            }
        }
        printf("%c: %d\n",str[i],count);
    }

}

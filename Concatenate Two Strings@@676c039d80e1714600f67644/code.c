#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100],str2[100];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    int i;
    for(i = 0;i<strlen(str1);i++)
        printf("%c",str1[i]);

    for(i = 0;i<strlen(str2);i++)
        printf("%c",str2[i]);
}
#include <stdio.h>
#include <string.h>

char compressString(char str[],char compressed[])
{
    int n = strlen(str);
    int count = 1, index = 0;
    for(int i=0;i<n;i++)
    {
        if(str[i] == str[i-1])
        {
            count++;
        }
        else 
        {  
            compressed[index++] = str[i - 1];  
            index += sprintf(&compressed[index], "%d", count);
            count = 1;
        }  
    }
    compressed[index] = '\0';  
    if (index >= n) 
        printf("%s\n", str);
    else 
        printf("%s\n", compressed);

}
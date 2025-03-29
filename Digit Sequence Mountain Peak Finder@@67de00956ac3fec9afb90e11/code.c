#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mountainPeak(int num) 
{
    char str[20];
    sprintf(str, "%d", num);
    
    int len = strlen(str);
    if(len < 3)
        return -1;
    
    for(int i=1;i<len - 1;i++)
    {
        if(str[i] > str[i+1] && str[i] > str[i - 1])
            return (str[i] - '0');
    }
    return -1;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mountainPeak(int num) 
{
    char str[20];
    sprintf(str, "%d", num);
    
    int len = strlen(str);
    
    for(int i=0;i<len;i++)
    {
        if(str[i] > str[i+1] && str[i] > str[i - 1])
            return str[i];
    }
    return -1;
}


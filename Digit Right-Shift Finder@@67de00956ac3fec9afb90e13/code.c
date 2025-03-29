#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int digitRightShift(int num) 
{
    char str[20];
    int len;
    sprintf(str, "%d", num);
    
    // int len = strlen(str);
    for(int len = 0;str[len]!='\0';len++);
    
    if (len == 1)
        return num;

    char lastDigit = str[len - 1];

    for (int i = len - 1; i > 0; i--) 
    {
        str[i] = str[i - 1];
    }

    str[0] = lastDigit;

    return atoi(str);
}


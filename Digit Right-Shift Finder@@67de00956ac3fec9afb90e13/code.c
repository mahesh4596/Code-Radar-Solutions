#include <stdlib.h>

int digitRightShift(int num)
{
    char str[20];
    int len;
    sprintf(str, "%d", num);

    for(int len = 0;str[len]!='\0';len++);

    int temp = str[0];
    str[0] = str[len - 1];
    str[len - 1] = temp;

    num = atoi(str);
    return num;
}
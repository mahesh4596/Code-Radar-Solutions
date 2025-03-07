#include <stdio.h>
#include <string.h>

void swap(char str1[], char str2[]) 
{
    char temp[100]; 
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int getMinLoc(char ary[][100], int beg, int size) 
{
    int loc = beg;
    for (int i = beg + 1; i < size; i++) 
    {
        if (strcmp(ary[i], ary[loc]) < 0) 
        { 
            loc = i;
        }
    }
    return loc;
}

void bubbleSort(char ary[][100], int size) 
{
    for (int j = 0; j < size - 1; j++) 
    {
        int loc = getMinLoc(ary, j, size);
        swap(ary[j], ary[loc]);
    }
}

void printArray(char ary[][100], int n) 
{
    for (int i = 0; i < n; i++)
        printf("%s\n", ary[i]);
}

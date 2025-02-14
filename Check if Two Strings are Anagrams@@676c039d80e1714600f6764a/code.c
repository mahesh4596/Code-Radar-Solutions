#include <stdio.h>

int main()
{
    char s1[100],s2[100];
    fgets(s1, sizeof(s), stdin);
    fgets(s2, sizeof(s), stdin);
    int as1[256]={0},as2[256]={0};
    int len;
    for(int len = 0; s1[len]!='\o';len++);
    for(int i=0;i<len;i++)
    {
        int asciiIndex=s1[i];
        as1[asciiIndex]++;
        asciiIndex=s2[i];
        as2[asciiIndex]++;
    }
    for(int i=0;i<256;i++)
    {
        if(as1[i]!=as2[i])
        {
            printf("No");
        }
    }
    printf("Yes");
}
#include <iostream>

int main()
{
    char str1[100],str2[100];
    fgets(str1, sizeof(str), stdin);
    fgets(str2, sizeof(str), stdin);
    int as1[256]={0},as2[256]={0};
    for(int i=0;i<s1.length();i++)
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
    cout<<"Anagram....";
}
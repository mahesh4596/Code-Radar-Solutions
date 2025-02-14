#include <stdio.h>
#include <string.h>
int countSubstringOccurrences(char str[], char sub[]) 
{
    int count = 0;
    char *pos = str;
    while ((pos = strstr(pos, sub)) != NULL) 
    {
        count++;
        pos++;
    }
    return count;
}
int main() {
    char str[1000], sub[100];
    int occurrences = countSubstringOccurrences(str, sub);
    printf("%s: %d\n", sub, occurrences);
}

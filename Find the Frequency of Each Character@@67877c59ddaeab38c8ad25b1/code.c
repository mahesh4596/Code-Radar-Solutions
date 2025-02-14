#include <stdio.h>
#include <string.h>
int countSubstringOccurrences(char str[]) 
{
    int count = 0;
    char *pos = str;
    while ((pos = strstr(pos)) != NULL) 
    {
        count++;
        pos++;
    }
    return count;
}
int main() {
    char str[1000];
    int occurrences = countSubstringOccurrences(str);
    printf("%s: %d\n", sub, occurrences);
}

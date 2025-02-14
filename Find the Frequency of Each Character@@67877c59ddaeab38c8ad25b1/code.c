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
    char str[100], sub[50];

    fgets(str, sizeof(str), stdin);
    fgets(sub, sizeof(sub), stdin);

    str[strcspn(str, "\n")] = '\0';  
    sub[strcspn(sub, "\n")] = '\0';  

    int occurrences = countSubstringOccurrences(str, sub);

    printf("%s: %d\n", sub, occurrences);

    return 0;
}

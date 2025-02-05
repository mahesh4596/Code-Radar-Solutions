#include <stdio.h>

int main() {
    char str[100];
    int len,i,j,jasoos=1;
    fgets(str,sizeof(str),stdin);
    for(len=0;str[len]!='\0';len++);
    for(i=0,j=len-1;i<len/2;i++,j--)
    {
        if(str[i]!=str[j])
        {
            jasoos=0;
            break;
        }
    }
    if(jasoos==1)
        printf("Yes");
    else
        printf("No");
}
#include <stdio.h>

int main() {
    char a[100],temp;
    int i,j,len;
    scanf("%s",&a);
    for(len=0;a[len]!='\o';len++);
    printf("%d", len);
    for(i=0,j=len-1;i<len;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf(a);
}
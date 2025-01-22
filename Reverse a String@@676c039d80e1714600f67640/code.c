#include <stdio.h>

int main() {
    char a[100],temp;
    int i,j,k,len;
    scanf("%s",&a);
    for(k=0;a[k]!='\o';k++)
        {len++;}
    printf("%d", len);
    for(i=0,j=len-1;i<len;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf(a);
}
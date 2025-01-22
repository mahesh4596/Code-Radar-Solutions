#include <stdio.h>

int main() {
    char a[100],temp;
    int i,j,k,len;
    scanf("%s",&a);
    len=strlen(a);
    for(i=0,j=len-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf(a);
}
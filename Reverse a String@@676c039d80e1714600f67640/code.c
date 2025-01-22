#include <stdio.h>

int main() {
    char a[100];
    gets(a);
    for(int i=0;a[i]!='\o';i++);
    for(int j=0,k=i-1;j<i/2;i++,j--)
    {
        int temp=a[j];
        a[j]=a[k];
        a[j]=temp;
    }
    printf(a);
}
#include <stdio.h>

int main() {
    char a[100];
    scanf("%s",&a);
    for(int i=0;a[i]!='\o';i++);
    for(int j=0,k=j-1;j<i/2;j++,k--)
    {
        int temp=a[j];
        a[j]=a[k];
        a[j]=temp;
    }
    printf(a);
}
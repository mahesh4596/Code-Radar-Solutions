#include <stdio.h>
#include <limits.h>

int getRotate(int &ary[],int size,int k)
{
    int ary2[size];
    for(int i=0;i<size;i++)
    {
        int id = (i+k)%size;
        ary2[id]=ary[i];
    }
    for(int i=0;i<size;i++)
    {
        ary[i] = ary2[i];
    }
}
void show(int &ary[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",ary[i]);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    int k;
    scanf("%d",&k);

    getRotate(ary,n,k);
    show(ary,n);
}
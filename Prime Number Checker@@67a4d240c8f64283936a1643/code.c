#include <stdio.h>

int isPrime(int N)
{
    for(int i=2;i<n;i++)
    {
        if(N%i==0)
            return 0;
        else
            return 1;
    }
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
}
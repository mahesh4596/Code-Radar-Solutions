#include <stdio.h>
int main()
{   int N,r,c,jasoos = 1,i;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
    }
    for(r=0;r<N;r++)
    {
        for(c=0;c<N-1-r;c++)
        {
            if(A[c]>A[c+1])
            {
                int temp = ary[c];
                ary[c] = ary[c+1];
                ary[c+1] = temp;
            }
        }
    }
    printf("%d",ary[n-2]);
}

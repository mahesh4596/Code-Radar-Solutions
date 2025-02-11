#include <stdio.h>
int main()
{   int N,r,c,temp,i;
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
                printf("Not Sorted");
            }
        }
    }
    printf("Sorted");
}

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
                jasoos=0;
                break;                
            }
        }
    }
    if(jasoos == 1)
        printf("Sorted");
    else
        printf("Not Sorted");
}

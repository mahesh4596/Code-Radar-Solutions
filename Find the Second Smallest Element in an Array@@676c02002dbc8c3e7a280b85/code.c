#include <stdio.h>
int main()
{   int N;
    scanf("%d",&N);
    int ary[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&ary[i]);
    }
    for(int r=0;r<N;r++)
    {
        for(int c=0;c<N-1-r;c++)
        {
            if(A[c]>A[c+1])
            {
                int temp = ary[c];
                ary[c] = ary[c+1];
                ary[c+1] = temp;
            }
        }
    }
    printf("%d",ary[N-2]);
}

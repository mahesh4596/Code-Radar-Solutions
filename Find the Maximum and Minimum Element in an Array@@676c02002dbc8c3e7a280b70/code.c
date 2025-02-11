#include <stdio.h>
int main()
{   int i,N,Max,Min;
    printf("Enter N =");
    scanf("%d",&N);
    int SAL[N];
    for(i=0;i<N;i++)
    {
        printf("Enter SAL at SAL[%d] =",i);
        scanf("%d",&SAL[i]);
    }
    Max=SAL[0];
    for(i=0;i<N;i++)
    {
        if(Max<SAL[i])
            Max=SAL[i];
    }
    Min=SAL[0];
    for(i=0;i<N;i++)
    {
        if(Min>SAL[i])
            Min=SAL[i];
    }
    printf("%d %d",Max,Min);
}

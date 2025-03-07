void fibonacciSeries(int n)
{
    int a = 0,b = 1,c = 0;
    while(c<n)
    {
        a = b;
        b = c;
        printf("%d ",c);
        c = a + b;
    }
}
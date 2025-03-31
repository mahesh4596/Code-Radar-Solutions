#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    int ary[n];
    for (int i = 0; i < n; i++) 
        scanf("%d", &ary[i]);

    double median;
    if (n % 2 == 1) 
        median = ary[n / 2]; 
    else 
        median = (ary[n / 2 - 1] + ary[n / 2]) / 2.0;

    printf("%.0f\n", median);
    return 0;
}

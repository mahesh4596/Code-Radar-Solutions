#include <stdio.h>

int isPrime(int N) 
{
    if (N <= 1) 
        return 0;
    if (N == 2) 
        return 1;
    for (int i = 2; i * i <= N; i++) 
    { 
        if (N % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) 
    {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}

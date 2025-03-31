#include <stdio.h>

void getFrequence(int ary[], int n) {
    int counted[n] ; 
    for (int i = 0; i < n; i++) {
        counted[i] = 0;
    }

    for (int i = 0; i < n; i++) 
    {
        if (counted[i]) 
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (ary[i] == ary[j]) {
                count++;
                counted[j] = 1; 
            }
        }
        printf("%d %d\n", ary[i], count);
    }
}

int main() 
{
    int n;
    scanf("%d", &n);
    int ary[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &ary[i]);
    }

    getFrequence(ary, n);
    return 0;
}

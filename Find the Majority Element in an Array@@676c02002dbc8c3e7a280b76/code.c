#include <stdio.h>

void getFrequence(int ary[], int n) 
{
    int maxFreq = n/2,maxElement;

    for (int i = 0; i < n; i++) 
    {
        int count = 0;
        for (int j = i + 1; j < n; j++) 
        {
            if (ary[i] == ary[j]) 
            {
                count++; 
            }
        }
        if (count > maxFreq) 
        {
            maxElement = ary[i];
        }
    }
    if(maxElement!=0)
        printf("%d", maxElement);
    else 
        printf("-1");
}

int main() {
    int n;
    scanf("%d", &n);

    int ary[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ary[i]);
    }

    getFrequence(ary, n);
    return 0;
}

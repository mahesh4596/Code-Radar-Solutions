#include <stdio.h>

void getFrequence(int ary[], int n) 
{

    int maxFreq = 0, maxElement = ary[0];

    for (int i = 0; i < n; i++) 
    {
        int count = 1;
        for (int j = i + 1; j < n; j++) 
        {
            if (ary[i] == ary[j]) 
            {
                count++;
                counted[j] = 1; 
            }
        }
        if (count > maxFreq) 
        {
            maxFreq = count;
            maxElement = ary[i];
        }
    }
    printf("%d", maxElement);
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

#include <stdio.h>

void getFrequence(int ary[], int n,int a) 
{
    int counted[n]; 
    for (int i = 0; i < n; i++) 
    {
        counted[i] = 0;
    }

    int maxFreq = 0, maxElement = ary[0];

    for (int i = 0; i < n; i++) 
    {
        if (counted[i]) 
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) 
        {
            if (ary[i] == ary[j]) 
            {
                count++;
                counted[j] = 1; 
            }
        }
        if (ary[i] == a) 
        {
            printf("%d",count);
            return;
        }
        // else
        // {
        //     printf("0");
        //     return;
        // }
    }
    printf("%d", maxElement);
}

int main() {
    int n,a;
    scanf("%d %d", &n,&a);

    int ary[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ary[i]);
    }

    getFrequence(ary, n, a);
    return 0;
}

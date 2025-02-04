#include <stdio.h>

int main() {
    int n, i, j, space;
    scanf("%d", &n);

    int mid = n / 2;

    for (i = 0; i <= mid; i++) 
    {
        for (space = 0; space < mid - i; space++) 
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = mid - 1; i >= 0; i--) 
    {
        for (space = 0; space < mid - i; space++) 
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

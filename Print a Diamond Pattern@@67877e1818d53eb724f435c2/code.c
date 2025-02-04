#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i += 2) 
    {
        for (int s = 1; s <= (rows - i) / 2; s++) 
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) 
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = rows - 2; i >= 1; i -= 2) 
    {
        for (int s = 1; s <= (rows - i) / 2; s++) 
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) 
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
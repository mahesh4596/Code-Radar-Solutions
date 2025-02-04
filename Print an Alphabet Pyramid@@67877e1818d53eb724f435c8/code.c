#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        for (int j = n - i; j > 0; j--) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
}
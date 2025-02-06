#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i,j,k,l,m;
    for (i=1; i<=n; i++) {
        for (j=n-i+1; j>=1;j--) {
            printf(" ");
        }
        for (k=1;k<=i;k++) {
            printf("*");
        }
        for (l=2; l<=i;l++) {
            printf("*");
        }
        for (m=1; m<=i; m++) {
            printf(" ");
        }
        printf("\n");
    }
    for (i=n-i; i>=1; i--) {
        for (j=n-i+1; j>=1;j--) {
            printf(" ");
        }
        for (k=1;k<=i;k++) {
            printf("*");
        }
        for (l=2; l<=i;l++) {
            printf("*");
        }
        for (m=1; m<=i; m++) {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
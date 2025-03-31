#include <stdio.h>

int isMonotonic(int ary[], int n) {
    int increasing = 1, decreasing = 1;

    for (int i = 1; i < n; i++) {
        if (ary[i] > ary[i - 1])
            decreasing = 0;
        else if (ary[i] < ary[i - 1])
            increasing = 0;
    }

    return increasing || decreasing;
}

int main() {
    int n;
    scanf("%d", &n);

    int ary[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ary[i]);

    if (isMonotonic(ary, n))
        printf("YES");
    else
        printf("NO");

    return 0;
}

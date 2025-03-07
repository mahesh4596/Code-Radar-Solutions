#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int getMinLoc(int ary[], int beg, int size) {
    int min = ary[beg], loc = beg;
    for (int i = beg; i < size; i++) {
        if (min > ary[i]) {
            min = ary[i];
            loc = i;
        }
    }
    return loc;
}

void doSelectionSort(int ary[], int size) {
    for (int j = 0; j < size - 1; j++) {
        int loc = getMinLoc(ary, j, size);
        swap(&ary[j], &ary[loc]);
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    int size = sizeof(ary) / sizeof(ary[0]);

    doSelectionSort(ary, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", ary[i]);
    }

    return 0;
}

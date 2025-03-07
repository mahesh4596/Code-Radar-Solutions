#include <stdio.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

int getMinLoc(char ary[], int beg, int size) {
    int loc = beg;
    for (int i = beg + 1; i < size; i++) {
        if (ary[i] < ary[loc]) {
            loc = i;
        }
    }
    return loc;
}

void insertionSort(char ary[], int size) {
    for (int j = 0; j < size - 1; j++) {
        int loc = getMinLoc(ary, j, size);
        swap(&ary[j], &ary[loc]);
    }
}

void printArray(char ary[], int n) {
    for (int i = 0; i < n; i++)
        printf("%c ", ary[i]);
}


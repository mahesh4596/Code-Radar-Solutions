#include <stdio.h>

void fibonacciSeries(int n) {
    int a = 0, b = 1, c; 
    c = a + b;  
    while (c < n) { 
        printf("%d ", c);
        a = b;
        b = c;
        c = a + b;  
    }
}


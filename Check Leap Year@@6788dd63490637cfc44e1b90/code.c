#include <stdio.h>

int main() {
    int y;
    scanf("%i",&y);
    if(y/4 && y/400 || y/100)
        printf("Leap Year");
    else
        printf("Not a Leap Year");
}
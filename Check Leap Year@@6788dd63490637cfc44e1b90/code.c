#include <stdio.h>

int main() {
    int y;
    scanf("%i",&y);
    if(y%4==0 && y%400==0 || y%100!=0)
        printf("Leap Year");
    else
        printf("Not a Leap Year");
}
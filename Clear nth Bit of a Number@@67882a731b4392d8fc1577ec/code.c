#include <stdio.h>

char* welcome() {
    int num, bit;
    scanf("%d %d", &num, &bit);
    if ((num>>bit)&1==1)
    return "1";
    else
    return "0";
}

int main() {
    printf("%s", welcome());
    return 0;
}
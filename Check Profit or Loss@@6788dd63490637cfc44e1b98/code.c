#include <stdio.h>

int main() {
    int cp,sp;
    scanf("%i %i",&cp,&sp);
    if(cp>sp)
        printf("Loss");
    else if(cp<sp)
        printf("Profit");
    else
        printf("No Profit No Loss");
}
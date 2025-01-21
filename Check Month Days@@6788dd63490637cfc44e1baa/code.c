#include <stdio.h>

int main() {
    int choice;
    scanf("%i",&choice);
    if(choice>=1 && choice<=12)
    {
        switch(choice)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("31");
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("30");
                break;
            case 2:
                printf("28");
                break;
        }
    }
    else
        printf("Invalid month");
}
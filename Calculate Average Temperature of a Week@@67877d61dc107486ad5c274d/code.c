#include <stdio.h>

struct Day 
{
    float temp;
    char day[100];
};

int main() 
{
    int n;
    float sum = 0.0;
    scanf("%d", &n);

    struct Day d[n];

    for(int i = 0; i < n; i++) 
    {
        scanf("%s %f",&d[i].day,&d[i].temp);
        sum += d[i].temp;
    }

    float avg = sum / (float)n;
    printf("Average Temperature: %.2f\n", avg);

    return 0;
}

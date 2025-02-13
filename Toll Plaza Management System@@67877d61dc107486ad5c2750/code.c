#include <stdio.h>
#include <string.h>

struct Vehicle
{
    char name[100], vno[100];
    float tamount;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct Vehicle vehicle[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %f", vehicle[i].vno, vehicle[i].name, &vehicle[i].tamount);
    }
    float tcar = 0, ttruck = 0, tbike = 0;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(vehicle[i].name, "Car") == 0)
            tcar += vehicle[i].tamount;
        else if (strcmp(vehicle[i].name, "Truck") == 0)
            ttruck += vehicle[i].tamount;
        else
            tbike += vehicle[i].tamount;
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f\n", tcar, ttruck, tbike);

}

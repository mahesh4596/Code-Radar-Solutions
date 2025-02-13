#include <stdio.h>

struct Vehicle
{
    char name[100],vno[100];
    float tamount;
};

int main()
{
    int n;
    scanf("%d",&n);
    struct Vehicle vehicle[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s %s %f",&vehicle[i].vno,&vehicle[i].name,&vehicle[i].tamount);
    }
    float tcar,ttruck,tcar;
    for(int i=0;i<n;i++)
    {
        if(vehicle[i].name == "Car")
            tcar += vehicle[i].tamount;
        else if(vehicle[i].name == "Truck")
            ttruck += vehicle[i].tamount;
        else
            tbike += vehicle[i].tamount;
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",tcar,ttruck,tbike);
}
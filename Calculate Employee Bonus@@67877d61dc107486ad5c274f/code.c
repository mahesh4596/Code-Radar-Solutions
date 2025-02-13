#include <stdio.h>

struct Employee
{
    int id;
    float salary;
    char name[100];
};

int main()
{
    int n;
    scanf("%d", &n);
    struct Employee emp[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
    }
    for(int i = 0; i < n; i++)
    {
        float bonus;
        if(emp[i].salary < 50000)
            bonus = (emp[i].salary * 10) / 100;
        else
            bonus = (emp[i].salary * 5) / 100;
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", emp[i].id, emp[i].name, bonus);
    }
}

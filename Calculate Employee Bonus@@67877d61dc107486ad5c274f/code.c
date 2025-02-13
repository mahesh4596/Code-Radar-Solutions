#include <stdio.h>
struct Employee
{
    int id,salary;
    char name[100];
};

int main()
{
    int n;
    scanf("%d",&n);
    struct Employee emp[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d &s &d",&emp[i].id,&emp[i].name,&emp[i].salary);
    }
    for(int i=0;i<n;i++)
    {
        if(emp[i].salary<50000)
            emp[i].salary = (emp[i].salary * 10)/100;
        else
            emp[i].salary = (emp[i].salary * 5)/100;
    }
    for(int i=0;i<n;i++)
    {
        printf("Employee ID: %d, Name: %s, Bonus: %.2f",emp[i].id,emp[i].name,emp[i].salary);
    }

}
#include <stdio.h>

struct Student
{
    int rollno;
    char name[100];
    float marks;
};

int main()
{
    int n;
    scanf("%d",&n);
    struct Student student[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %f",&student[i].rollno,&student[i].name,&student[i].marks);
    }
    for(int i=0;i<n;i++)
    {
        if(student[i].marks>=85)
            printf("Roll Number: %d, Name: %s, Grade: A\n",student[i].rollno,student[i].name);
        else if(student[i].marks>=70 && student[i].marks<85)
            printf("Roll Number: %d, Name: %s, Grade: B\n",student[i].rollno,student[i].name);
        else
            printf("Roll Number: %d, Name: %s, Grade: C\n",student[i].rollno,student[i].name);
    }
}
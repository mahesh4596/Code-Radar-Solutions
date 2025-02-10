#include <stdio.h>

struct Student
{
    int rno;
    float marks;
    char name[100];
};

int main() {
    int n;
    scanf("%d",&n);

    struct Student students[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %f",&students[i].rno,&students[i].name,&students[i].marks);
    }

    int count=0
    for(int i=0;i<n;i++)
    {
        if(students[i].marks>students[count].marks)
            count=i;
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n",students[count].rno,students[count].name,students[count].marks);

}
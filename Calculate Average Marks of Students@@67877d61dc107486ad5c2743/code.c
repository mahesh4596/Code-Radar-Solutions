#include <stdio.h>

struct Student
{
    int rno;
    char name[100];
    float marks;
}

int main() {
    int n,sum=0;
    scanf("%d",&n);
    struct Student students[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d %s %f",&students[i].rno,&students[i].name,&students[i].marks);
        sum+=students[i].marks;
    }
    float avg = sum/n;
    printf("Average Marks: %f",avg);
}
#include <stdio.h>

struct STUDENT
{
    int rollno;
    char name[100];
    float marks;
};

int main() {
    int n,count=0;
    float threshold;
    scanf("%d",&n);
    struct STUDENT students[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d %s %f",&students[i].rollno,&students[i].name,&students[i].marks);
    }
    scanf("%f",&threshold);
    for(int i=1;i<=n;i++)
    {
        if(students[i].marks>threshold)
            count++;
    }
    printf("Count of students scoring above %.2f: %d",threshold,count);
    
}
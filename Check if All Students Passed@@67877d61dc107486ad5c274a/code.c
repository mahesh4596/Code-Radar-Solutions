#include <stdio.h>

struct STUDENT
{
    int rollno;
    char name[100];
    float marks;
};

int main() {
    int n,count=0;
    scanf("%d",&n);
    struct STUDENT students[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d %s %f",&students[i].rollno,&students[i].name,&students[i].marks);
    }
    for(int i=1;i<=n;i++)
    {
        if(students[i].marks > 50)
            count++;
    }
    if(count==n)
        printf("All Passed");
    else
        printf("Not All Passed");
    
}
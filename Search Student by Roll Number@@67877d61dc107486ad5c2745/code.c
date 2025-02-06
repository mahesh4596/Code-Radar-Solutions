#include <stdio.h>
struct Student
{
    int rollno;
    char name[100];
    float marks;
};
int main() {
    int n,rno,found=0;
    scanf("%d",&n);
    struct Student students[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d %s %f",&students[i].rollno,&students[i].name,&students[i].marks);
    }
    scanf("%d",&rno);
    for(int i=1;i<=n;i++)
    {
        if(students[i].rollno==rno)
        {
            printf("Roll Number: %d, Name: %s, Marks: %.2f",students[i].rollno,students[i].name,students[i].marks);
            found=1;
            break;
        }
    }
    if(!found)
        printf("Student not found");
    
    return 0;

}
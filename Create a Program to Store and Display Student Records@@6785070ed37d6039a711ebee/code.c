#include <stdio.h>
struct Student
{
    int rno,marks;
    char name[100];
}

int main() {
    struct Student s1;
    int n;
    scanf("%d",&n);
    for(int i;i<=n;i++)
    {
        scanf("%d %s %d",&s1.rno,&s1.name,&s1.marks);
        printf("\n");
    }
    printf("Roll Number: %d, Name: %s, Marks: %d",s1.rno,s1.name,s1.marks);
}
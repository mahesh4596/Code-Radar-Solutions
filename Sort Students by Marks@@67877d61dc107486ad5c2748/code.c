#include <stdio.h>

struct STUDENT {
    int rollno;
    char name[100];
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct STUDENT students[n];
    for (int i=0;i<=n;i++) {
        scanf("%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
    }
    for(int r=0;r<=n;r++)
    {
        for(int c=0;c<=n-1-r;c++)
        {
            if(students[c].marks>students[c+1].marks)
            {
                struct STUDENT temp=students[c];
                students[c]=students[c+1];
                students[c+1]=temp;
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        printf("Roll Number: %d, Name: %s, Marks: %.2f",students[i].rollno,students[i].name,students[i].marks);
        printf("\n");
    }

}

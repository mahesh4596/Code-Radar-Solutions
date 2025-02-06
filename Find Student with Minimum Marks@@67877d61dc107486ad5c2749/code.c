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
    for (int i = 0; i < n; i++) {
        scanf("%d %s %f", &students[i].rollno, students[i].name, &students[i].marks);
    }

    float minimum = students[0].marks;
    int minIndex = 0;

    for (int i = 1; i < n; i++) { 
        if (students[i].marks < minimum) {
            minimum = students[i].marks;
            minIndex = i;
        }
    }
    printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n",rollno[minIndex],name[minIndex],marks[minIndex]);
    return 0;
}

#include <stdio.h>

struct Rectangle
{
    int length,breadth;
};

int main() {
    int n;
    scanf("%d",&n);
    struct STUDENT rectangle[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&rectangle[i].length,&rectangle[i].breadth);
    }
    for(int i=1;i<=n;i++)
    {
        int area = rectangle[i].length * rectangle[i].breadth;
        int perimeter = 2 * (rectangle[i].length + rectangle[i].breadth);

        printf("Rectangle %d: Area = %d, Perimeter = %d\n", i+1, area, perimeter);
    }
}
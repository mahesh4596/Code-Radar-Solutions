#include <stdio.h>

struct Book 
{
    float price;
    char title[100], author[100];
};

int main() 
{
    int n;
    scanf("%d", &n);

    struct Book books[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%s %s %f", books[i].title, books[i].author, &books[i].price);
    }

    float p;
    scanf("%f", &p);
printf("Books above price %.2f:\n",p);
    int found = 0;
    for (int i = 0; i < n; i++) 
    { 
        if (books[i].price > p) 
        {  
            
            printf("Title: %s, Author: %s, Price: %.2f\n", books[i].title, books[i].author, books[i].price);
            found = 1;
        }
    }
    if (!found) 
    {
        printf("No books above price %d\n", p);
    }

    return 0;
}

#include <stdio.h>

struct Book
{
    int price;
    char author[100],title[100];
};

int main() {
    int n;
    scanf("%d",&n);

    struct Book books[n];
    for(int i=0;i<n;i++)
    {
        scanf("%s %s %d",&books[i].title,&books[i].author,&books[i].price);
    }
    int p;
    scanf("%d",&p);

    for(int i=0;i<n;i++)
    {
        if(books[i].price>p)
            printf("Books above price %.2f: Title: %s, Author: %s, Price: %.2f\n",p,books[i].title,books[i].author,books[i].price);       
    }

}
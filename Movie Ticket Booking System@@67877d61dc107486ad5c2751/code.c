#include <stdio.h>
#include <string.h>

struct MovieTicket
{
    char mname[100],ttype[100];
    int tprice;
};

int main()
{
    int n;
    scanf("%d",&n);
    struct MovieTicket movie[n];
    for(int i=0;i<n;i++)
        scanf("%s %s %d",&movie[i].mname,&movie[i].ttype,&movie[i].tprice);
    float ps = 0, pp = 0, pvip = 0;
    for(int i=0;i<n;i++)
    {
        if(strcmp(movie[i].ttype,"Standard") == 0)
            ps += movie[i].tprice;
        else if(strcmp(movie[i].ttype,"Premium") == 0)
            pp += movie[i].tprice;
        else
            pvip += movie[i].tprice;
    }
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f",ps,pp,pvip);
}
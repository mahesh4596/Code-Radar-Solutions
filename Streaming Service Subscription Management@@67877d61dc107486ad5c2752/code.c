#include <stdio.h>
#include <string.h>

struct Subscription
{
    char uname[100],stype[100];
    float scost;
};

int main()
{
    int n;
    scanf("%d",&n);
    struct Subscription service[n];
    for(int i=0;i<n;i++)
        scanf("%s %s %f",&service[i].uname,&service[i].stype,&service[i].scost);
    int cb = 0,cs = 0,cp = 0,tbasic = 0,tpremium = 0,tstandard = 0;
    for(int i=0;i<n;i++)
    {
        if(strcmp(service[i].stype,"Basic") == 0)
        {
            tbasic += service[i].scost;
            cb ++;
        }
        else if(strcmp(service[i].stype,"Standard") == 0)
        {
            tstandard += service[i].scost;
            cs ++;
        }
        else
        {
            tpremium += service[i].scost;
            cp ++;
        }
    }
    printf("Basic: %.0f, Revenue: %.2f; Standard: %.0f, Revenue: %.2f; Premium: %.0f, Revenue: %.2f",cb,tbasic,cs,tstandard,cp,tpremium);
}
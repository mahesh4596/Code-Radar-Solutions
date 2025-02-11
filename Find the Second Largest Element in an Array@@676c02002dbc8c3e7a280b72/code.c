#include <stdio.h>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

class BCE
{
    public:
    int getMax(vector<int> ary)
    {
        int m1=ary[0], m2=INT_MIN;
        for(int i=0;i<ary.size();i++)
        {
            if(m1<ary[i])
            {
                m2=m1;
                m1=ary[i];
            }
            else if(m1>ary[i]&&m2<ary[i])
            {
                m2=ary[i];
            }
        }
        if(m1==ary[0]&&m2==INT_MIN)
        {
            return (1);
        }
        else
        {
            return(m2);
        }
    }
};

int main()
{
    int n;
    scanf("%d",&n);
    int ary[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    BCE obj;
    int max=obj.getMax(ary);
    printf("%d",max);
}
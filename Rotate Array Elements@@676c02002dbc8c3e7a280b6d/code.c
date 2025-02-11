#include <stdio.h>
#include <vector>
#include <algorithm>

class Rotate
{
    void rotate(vector<int> &ary, int k)
    {
        int n=ary.size();
        vector<int> ary2(ary.size());
        for(int i=0;i<n;i++)
        {
            int id=(i+k) % n;
            ary2[id]=ary[i];
        }
        ary=ary2;
    }
    void show(vector<int> &ary)
    
}
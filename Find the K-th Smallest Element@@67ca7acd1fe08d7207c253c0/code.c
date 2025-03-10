int kthSmallest(int ary[],int n,int k)
{
    int nums[100];
    for(int i=0;i<n;i++)
    {
        int id=(i+k)%n;
        nums[id]=ary[i];
    }
    ary=nums;
    return ary;
}
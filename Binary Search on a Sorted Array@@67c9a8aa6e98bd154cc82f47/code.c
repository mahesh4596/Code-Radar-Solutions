int binarySearch(int ary[],int n,int target)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(ary[i]==target)
            return i;
    }
    return -1;
}
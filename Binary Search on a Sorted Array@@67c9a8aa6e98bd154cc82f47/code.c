int binarySearch(int ary[],int n,int target)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(ary[i]==target && ary[i]!=ary[i+1])
            return i;
        if(ary[i]==ary[i+1])
            return 3;
    }
    return -1;
}
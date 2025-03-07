int findOccurance(int ary[],int n,int target,char mode)
{
    int i;
    if(mode=='F')
    {
        for(i=0;i<n;i++)
        {
            if(ary[i]==target)
                return i;
        }
    }
    if(mode=='F')
    {
        for(i=n-1;i>=0;i++)
        {
            if(ary[i]==target)
                return i;
        }
    }
    return -1;
}
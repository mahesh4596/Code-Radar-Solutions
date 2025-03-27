int maxGadgetSpend(int keyboards[],int n,int headsets[],int m,int budget)
{
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
        {
            if((keyboards[i] + headsets[j]) >= budget)
            {
                return (keyboards[i] + headsets[j]);
            }
        }
    }
    return -1;
}
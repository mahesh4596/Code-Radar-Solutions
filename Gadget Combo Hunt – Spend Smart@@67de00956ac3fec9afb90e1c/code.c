int maxGadgetSpend(int keyboards[], int n, int headsets[], int m, int budget) 
{
    int max_spent = -1;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            int total_cost = keyboards[i] + headsets[j];
            if (total_cost <= budget)
                max_spent = total_cost;
        }
    }
    if(max_spent == -1)
        return -1;
    else 
        return max_spent;
}

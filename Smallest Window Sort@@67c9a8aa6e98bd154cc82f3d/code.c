int findUnsortedSubarray(int arr[],int n)
{
    int count = 0;
    for(int r = 0;r < n;r++)
    {
        for(int c = 0;c < n; c++)
        {
            if(arr[c] > arr[c + 1])
                count++;
        }
    }
    return count;
}
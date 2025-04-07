int findUnsortedSubarray(int arr[],int n)
{
    int count;
    for(int r = 0;r < n;r++)
    {
        for(int c = 0;c < n - 1 - r; c++)
        {
            if(arr[c] > arr[c + 1])
                count++;
        }
    }
    return count;
}
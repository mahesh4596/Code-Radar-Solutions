int findKthMissing(int arr[], int n, int k) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = (left + right )/ 2;
        int missing = arr[mid] - (mid + 1);
        
        if (missing < k)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return left + k;
}
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        vector<int> v(r-l+1);
        int i = l, j = m+1, x=0;
        
        while(i<=m && j<=r)
        {
            if (arr[i] < arr[j]) v[x++] = arr[i++];
            else v[x++] = arr[j++];
        }
        
        while (i <= m) v[x++] = arr[i++];
        while (j <= r) v[x++] = arr[j++];
        
        for(int k=l; k<=r; k++) arr[k] = v[k-l];
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if (l >= r) return;
        int m = (l + r) / 2;
        
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        
        merge(arr, l, m, r);
    }
};
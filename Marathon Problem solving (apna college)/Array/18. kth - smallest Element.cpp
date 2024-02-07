class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        
        priority_queue<int> maxHeap;
        
        int n = r-l+1;
        
        for (auto i=0; i<n; i++) {
           maxHeap.push(arr[i]);
        }
        
        int p = n - k;
        
        for(auto i =0; i<p; i++){
            maxHeap.pop();
        }
        
        return maxHeap.top();
    }
};
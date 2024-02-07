/* Given an array arr[] denoting heights of N towers and a positive integer K.

For each tower, you must perform exactly one of the following operations exactly once.

    Increase the height of the tower by K
    Decrease the height of the tower by K

Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.

You can find a slight modification of the problem here.
Note: It is compulsory to increase or decrease the height by K for each tower. After the operation, the resultant array should not contain any negative integers. */


class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr+n);
        int mn , mx;
        int res = arr[n-1] - arr[0];
        for(auto i =0; i<n-1; i++){
            int a = i, b = i+1;
            
            if(arr[b]<k) continue;
            
            mn = min(arr[0]+k, arr[b]-k);
            mx = max(arr[n-1]-k, arr[a]+k);
            res = min(res, mx-mn);
        }
        
        return res;
    }
};
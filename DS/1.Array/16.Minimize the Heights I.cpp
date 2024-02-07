/* Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once.
Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.
Note: Assume that height of the tower can be negative.
A slight modification of the problem can be found here.  */


class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
       sort(arr, arr+n);
        int mn , mx;
        int res = arr[n-1] - arr[0];
        for(auto i =0; i<n-1; i++){
            int a = i, b = i+1;
            
            mn = min(arr[0]+k, arr[b]-k);
            mx = max(arr[n-1]-k, arr[a]+k);
            res = min(res, mx-mn);
        }
        
        return res;
    }
};
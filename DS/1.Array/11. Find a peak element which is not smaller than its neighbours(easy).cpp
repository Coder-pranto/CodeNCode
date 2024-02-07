//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

typedef long long       ll;
#define el "\n"
#define r0 return 0
#define bb break
#define cc continue
#define sz(x)   (int )x.size()
#define pb push_back
#define epb emplace_back
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(), (x).rend()
#define kase       int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int findPeak(int arr[], int n){
    if(n == 0) return 0;
    if(arr[0] >= arr[1]) return 0;
    if(arr[n-1]>=arr[n-2]) return n-1;

    for(auto i = 1; i<n-1; i++){
        if((arr[i]>=arr[i-1]) && (arr[i]>=arr[i+1]))
        return i ;
    }

    return -1;
}

int findPeak2(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid;
    while(start < end ){
        mid = start + (end-start)>>1;
        if(arr[mid]> arr[mid+1]){
            end = mid;  // explanation is below
        }else{
            start = mid+1;
        }
    }

    return start;
}

int findPeak3(int arr[], int n){
    int low = 0;
    int high= n-1;
    int mid;
    while(low<=high){
         mid=low+(high-low)>>1;

        if((mid == 0 or arr[mid]>= arr[mid-1] ) and (mid == n-1 or  arr[mid]>= arr[mid+1]))
        return mid;
        else if(mid>0 and arr[mid]<arr[mid-1])
        high=mid-1;
        else
        low=mid+1;
    }

    return mid;
        
}

int findPeak4(int arr[], int n, int low, int high)
{

    int mid;
    mid = low + (high - low) >> 1;

    if ((mid == 0 or arr[mid] >= arr[mid - 1]) and (mid == n - 1 or arr[mid] >= arr[mid + 1]))
        return mid;
    else if (mid > 0 and arr[mid] < arr[mid - 1])
      return findPeak4(arr, n, low, mid - 1);
    else
       return findPeak4(arr, n, mid + 1, high);

}

int main()
{
    optimize();
 int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Index of a peak point is " << findPeak(arr, n ) << endl;
    cout << "Index of a peak point is " << findPeak2(arr, n ) << endl;
    cout << "Index of a peak point is " << findPeak3(arr, n ) << endl;
    cout << "Index of a peak point is " << findPeak4(arr, n, 0, n-1 ) << endl;
    r0;
}



/* findPeak2 : Using Binary Search, check if the middle element is the peak element or not. If the middle element the peak element terminate the while loop and print middle element, then check if the element on the right side is greater than the middle element then there is always a peak element on the right side. If the element on the left side is greater than the middle element then there is always a peak element on the left side.  */
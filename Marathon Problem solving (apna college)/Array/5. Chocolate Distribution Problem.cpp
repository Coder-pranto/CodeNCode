//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;


int findMinDiff(int arr[],int n,int m){
    if(n<m) return -1;
    if(n == 0 or m == 0) return 0;

    sort(arr, arr+n);
    int diff_min = INT_MAX;

    for(int i=0; i+m-1<n; i++){
        if((arr[i+m-1] - arr[i])< diff_min){
            diff_min = arr[i+m-1] - arr[i];
        }
    }

    return diff_min;
}

int main()
{
    int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30,
                  40, 28, 42, 30, 44, 48, 43, 50 };
    int m = 5; // Number of students
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum difference is "
         << findMinDiff(arr, n, m);
    return 0;
}
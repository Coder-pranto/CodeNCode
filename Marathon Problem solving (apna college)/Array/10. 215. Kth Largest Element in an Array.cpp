// BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define optimize()               \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);

void heapify(int arr[], int N, int i)
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < N && arr[left] < arr[smallest])
        smallest = left;
    if (right < N && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != i)
    {
        swap(arr[smallest], arr[i]);
        heapify(arr, N, smallest);
    }
}

void minHeap(int arr[], int N)
{

    for (int i = (N / 2) - 1; i >= 0; i--)
    {
        heapify(arr, N, i);
    }

    for (int i = N - 1; i >= 0; i--)
    {
        swap(arr[i], arr[0]);
        heapify(arr, i, 0);
    }
}

int main()
{

    optimize() int arr[] = {3, 2, 3, 1, 2, 4, 5, 5, 6};
    int k = 4;
    int N = sizeof(arr) / sizeof(arr[0]);

    minHeap(arr, N);
    cout << arr[k - 1];
    return 0;
}


/* class Solution {
public:


    int findKthLargest(vector<int>& nums, int k) {
         priority_queue<int, vector<int>, greater<int>> minHeap;
         for(auto &u : nums){
             minHeap.push(u);
         }
         
         int n = (nums.size())-k +1;
         for(auto i =1; i<n; i++){
          minHeap.pop();
         }
        return minHeap.top();
    }
}; */
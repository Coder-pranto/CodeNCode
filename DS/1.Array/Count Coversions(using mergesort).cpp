#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

// Merge Sort with Inversion Count
ll merge(int a[], int left, int mid, int right)
{
    int index_a, index_l, index_r;

    int size_left = mid - left + 1;
    int size_right = right - mid;

    int l[size_left], r[size_right];

    for (int i = 0; i < size_left; i++)
    {
        l[i] = a[left + i];
    }

    for (int i = 0; i < size_right; i++)
    {
        r[i] = a[mid + 1 + i];
    }

    index_l = 0;
    index_r = 0;
    ll inversion_count = 0;

    for (index_a = left; index_l < size_left && index_r < size_right; index_a++)
    {
        if (l[index_l] <= r[index_r])
        {
            a[index_a] = l[index_l];
            index_l++;
        }
        else
        {
            a[index_a] = r[index_r];
            index_r++;
            // This is where you count inversions.
            inversion_count += (size_left - index_l);
        }
    }

    while (index_l < size_left)
    {
        a[index_a] = l[index_l];
        index_l++;
        index_a++;
    }
    while (index_r < size_right)
    {
        a[index_a] = r[index_r];
        index_r++;
        index_a++;
    }

    return inversion_count;
}

ll merge_sort(int a[], int left, int right)
{
    ll inversion_count = 0;
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        // Count inversions in the left and right subarrays
        inversion_count += merge_sort(a, left, mid);
        inversion_count += merge_sort(a, mid + 1, right);

        // Merge and count inversions
        inversion_count += merge(a, left, mid, right);
    }
    return inversion_count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a[] = {8, 4, 2, 1};
    int nn = sizeof(a) / sizeof(a[0]);
    ll inversion_count = merge_sort(a, 0, nn - 1);

    cout<< inversion_count << endl;

    return 0;
}

/* 
typedef long long ll;

class Solution {
public:
    ll mergeAndCount(vector<ll>& arr, int left, int mid, int right) {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        vector<ll> L(n1), R(n2);
        for (int i = 0; i < n1; i++) {
            L[i] = arr[left + i];
        }
        for (int i = 0; i < n2; i++) {
            R[i] = arr[mid + 1 + i];
        }

        int i = 0, j = 0, k = left;
        ll invCount = 0;

        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k++] = L[i++];
            } else {
                arr[k++] = R[j++];
                invCount += (ll)(n1 - i);
            }
        }

        while (i < n1) {
            arr[k++] = L[i++];
        }

        while (j < n2) {
            arr[k++] = R[j++];
        }

        return invCount;
    }

    ll mergeSortAndCount(vector<ll>& arr, int left, int right) {
        ll invCount = 0;
        if (left < right) {
            int mid = left + (right - left) / 2;
            invCount += mergeSortAndCount(arr, left, mid);
            invCount += mergeSortAndCount(arr, mid + 1, right);
            invCount += mergeAndCount(arr, left, mid, right);
        }
        return invCount;
    }

    long long int inversionCount(long long arr[], long long N) {
        vector<ll> vec(arr, arr + N);
        return mergeSortAndCount(vec, 0, N - 1);
    }
}; */
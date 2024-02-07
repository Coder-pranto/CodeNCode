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

int findMinDiff(int arr[], int n, int m)
{

    sort(arr, arr + n);

    int minDiff = INT_MAX;

    for (auto i = 0; i + m - 1 < n; i++)
    {
        if ((arr[i + m - 1] - arr[i]) < minDiff)
        {
            minDiff = arr[i + m - 1] - arr[i];
        }
    }

    return minDiff;
}

int main()
{
    optimize();
    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12};
    int m = 7; // Number of students
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum difference is "
         << findMinDiff(arr, n, m);
    r0;
}
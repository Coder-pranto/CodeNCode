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

bool solve(int arr[], int n, int k, int sum)
{
    for (int i = 0; i + k - 1 < n; i++)
    {
        int x = accumulate(arr + i, arr + k + i, 0);
        if (x == sum)
        {
           return true;
        }
    }

    return false;
}

// sliding window technique
bool solve2(int arr[], int n, int k, int sum)
{

    int curr_sum = accumulate(arr, arr + k, 0);

    for (int i = k; i < n; i++)
    {
        curr_sum = curr_sum + arr[i] - arr[i - k];
        if (curr_sum == sum)
        {
           return true;
        }
    }

    return false;
}

int main()
{
    optimize();
    int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};

    int n = sizeof(arr) / sizeof(arr[0]);
    bool res = solve(arr, n, 4, 18);
    bool res2 = solve2(arr, n, 4, 18);

    cout << (res ? "yes" : "no") << el;
    cout << (res2 ? "yes" : "no") << el;

    r0;
}
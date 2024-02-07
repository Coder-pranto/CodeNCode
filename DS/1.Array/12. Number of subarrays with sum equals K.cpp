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

int solve(int arr[], int n, int x)
{
    unordered_map<ll, int> mp;
    int cnt = 0;
    ll prefix = 0;
    for (auto i = 0; i < n; i++)
    {
        prefix += arr[i];
        if (prefix == x)
            cnt++;
        ll sub = prefix - x;
        if (mp.find(sub) != mp.end())
        {
            cnt += mp[sub];
        }
        mp[prefix]++;
    }
    return cnt;
}
int main()
{
    optimize();
    int arr[] = {3, 4, 7, 2, -3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7;
    cout << solve(arr, n, x) << el;

    r0;
}

//output: 4

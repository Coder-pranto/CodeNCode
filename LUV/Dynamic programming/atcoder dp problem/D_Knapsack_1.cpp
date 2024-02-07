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
#define kase       int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const int N = 1e5 + 7;
int wt[105];
ll val[105];
ll dp[105][N];

ll knapsack(int idx, int wt_left)
{
    if (wt_left == 0 || idx < 0)
        return 0;
    if (dp[idx][wt_left] != -1)
        return dp[idx][wt_left];
    ll ans = knapsack(idx - 1, wt_left);
    if (wt_left - wt[idx] >= 0)
    {
        ans = max(ans, knapsack(idx - 1, wt_left - wt[idx]) + val[idx]);
    }

    return dp[idx][wt_left] = ans;
}
int main()
{
    optimize();

    memset(dp, -1, sizeof(dp));

    int n, w;
    cin >> n >> w;

    for (int i = 0; i < n; i++)
    {
        cin >> wt[i] >> val[i];
    }

    cout << knapsack(n - 1, w) << el;

    r0;
}
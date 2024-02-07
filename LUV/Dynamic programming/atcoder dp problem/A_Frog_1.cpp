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
int dp[N];
int h[N];

int solve(int n)
{

    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int cost = INT_MAX;
    cost = min(cost, solve(n - 1) + abs(h[n] - h[n - 1]));
    if (n > 1)
        cost = min(cost, solve(n - 2) + abs(h[n] - h[n - 2]));

    return dp[n] = cost;
}

int main()
{
    optimize();
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    cout << solve(n - 1);

    r0;
}
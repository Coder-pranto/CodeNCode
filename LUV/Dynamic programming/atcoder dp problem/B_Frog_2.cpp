//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

typedef long long       ll;
#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const int N = 1e5 + 7;
int dp[N];
int h[N];
int k;
int solve(int n)
{
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int cost = INT_MAX;

    for (int i = 1; i <=k; i++)
    {
        if (n - i >= 0)
            cost = min(cost, solve(n - i) + abs(h[n] - h[n - i]));
    }

    return dp[n] = cost;
}

int main()
{
    optimize();
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    cout << solve(n - 1);

    r0;
}
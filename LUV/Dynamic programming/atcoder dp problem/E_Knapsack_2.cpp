//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

typedef long long       ll;
#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const int N = 1e5 + 7;
int wt[105];
ll val[105];
ll dp[105][N];

ll knapsack(int idx, int val_left)
{
    if (val_left == 0)
        return 0;
    if (idx < 0)
        return 1e15;
    if (dp[idx][val_left] != -1)
        return dp[idx][val_left];
    ll ans = knapsack(idx - 1, val_left);
    if (val_left - val[idx] >= 0)
    {
        ans = min(ans, knapsack(idx - 1, val_left - val[idx]) + wt[idx]);
    }

    return dp[idx][val_left] = ans;
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

    int mx_value = 1e5;
    for(int i = mx_value; i>=0; --i){
        if(w >= knapsack(n - 1, i)){
             cout <<i<< el;
            break;
        }
    }

    r0;
}
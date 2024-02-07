//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const int N = 1e4 + 7;
int dp[N];

int func(vector<int> &coins, int amount)
{
    if (amount == 0)
        return 0;
    if (dp[amount] != -1)
        return dp[amount];
    int ans = INT_MAX;

    for (auto &coin : coins)
    {
        if (amount - coin >= 0)
            ans = min(ans + 0LL, func(coins, amount - coin) + 1LL);
    }

    return dp[amount] = ans;
}

int coinChange(vector<int> &coins, int amount)
{
    int ans = func(coins, amount);

    return ans == INT_MAX ? -1 : ans;
}

int main()
{
    optimize();
    memset(dp, -1, sizeof(dp));
    vector<int>coins = {1,2,5};
    int amount = 11;
    cout<<coinChange(coins, amount);


    r0;
}


/* ans = 3 */
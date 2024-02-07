// BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize() ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const int N = 1e4 + 7;
int dp[N];

int func(vector<int> &coins, int amount)
{
    if (amount == 0)
        return 1; // One valid solution found
    if (dp[amount] != -1)
        return dp[amount];
    int ways = 0;

    for (auto &coin : coins)
    {
        if (amount - coin >= 0)
            ways += func(coins, amount - coin);
    }

    return dp[amount] = ways;
}

int coinChange(vector<int> &coins, int amount)
{
    int ways = func(coins, amount);

    return ways;
}

int main()
{
    optimize();
    memset(dp, -1, sizeof(dp));
    vector<int> coins = {1, 2, 5};
    int amount = 5; // Change this to your desired amount
    cout << coinChange(coins, amount) << el;

    r0;
}

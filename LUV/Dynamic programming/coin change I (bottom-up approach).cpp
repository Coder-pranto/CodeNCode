//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


int coinChange(vector<int> &coins, int amount)
{
    const int N = amount + 1;
    const int INF = 1e9;

    vector<int> dp(N, INF);
    dp[0] = 0;

    for (int i = 1; i < N; i++)
    {
        for (auto &coin : coins)
        {
            if (i - coin >= 0)
            {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    return dp[amount] == INF ? -1 : dp[amount];
}

int main()
{
    optimize();
    vector<int>coins = {1,2,5};
    int amount = 11;
    cout<<coinChange(coins, amount);


    r0;
}


/* ans = 3 */
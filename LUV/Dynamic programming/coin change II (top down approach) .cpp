//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const int N = 1e4 + 7;
const int C = 305;
int dp[C][N];

int func(int idx, int amount, vector<int> &coins)
{
    if (amount == 0)
        return 1;
    if (idx < 0)
        return 0;
    if (dp[idx][amount] != -1)
        return dp[idx][amount];

    int ways = 0;

    for (int coin_amount = 0; coin_amount <= amount; coin_amount += coins[idx])
    {
        ways += func(idx - 1, amount - coin_amount, coins);
    }

    return dp[idx][amount] = ways;
}

int coinChange(vector<int> &coins, int amount)
{
    int len = coins.size();
    int ans = func(len - 1, amount, coins);
    return ans;
}

int main()
{
    optimize();
    memset(dp, -1, sizeof(dp));
    vector<int> coins = {1, 2, 5};
    int amount = 5;
    cout << coinChange(coins, amount);

    r0;
}

/* 518. Coin Change II
leetcode */




/* ans = 3 */



/* class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        const int N = amount + 1;
        const int C = coins.size();

        vector<vector<int>> dp(C, vector<int>(N, 0));
        // Initialize dp[0][j] to 1, since we can always form 0 using any coins.
        for (int j = 0; j < N; j++) {
            dp[0][j] = (j == 0) ? 1 : 0;
        }

        for (int i = 1; i < C; i++) {
            for (int j = 0; j < N; j++) {
                dp[i][j] = dp[i - 1][j];
                if (j - coins[i] >= 0) {
                    dp[i][j] += dp[i][j - coins[i]];
                }
            }
        }

        return dp[C - 1][amount];
    }
};




 here's the bottom-up approach of the same coin change problem. We can use a 2D array dp[i][j] to store the number of ways we can form the amount j using the coins up to index i.


 In this implementation, we first initialize the base cases, i.e., dp[0][j] to 1 if j is 0 and 0 otherwise. Then, we use a nested loop to iterate over all coins and all amounts up to the given amount. We update dp[i][j] by either copying the value from dp[i - 1][j] (which means we don't use the i-th coin) or adding the value from dp[i][j - coins[i]] (which means we use the i-th coin).

Finally, we return dp[C - 1][amount], which represents the number of ways we can form the given amount using all coins.

 */
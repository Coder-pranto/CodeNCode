//* Statement: Given a set of n items numbered from 1 up to n, each with a weight wi and a value vi, along with a maximum weight capacity W, maximize the sum of the values of the items in the knapsack so that the sum of the weights is less than or equal to the knapsack's capacity.

//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
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

ll knapsack(int n, int W)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (wt[i - 1] <= j)
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][W];
}

int main()
{
    optimize();

    memset(dp, 0, sizeof(dp));

    int n, w;
    cin >> n >> w;

    for (int i = 0; i < n; i++)
    {
        cin >> wt[i] >> val[i];
    }

    cout << knapsack(n, w) << el;

    r0;
}

/* 

inputs: 
3 5

1 6
2 10
3 12


output : 22
 */

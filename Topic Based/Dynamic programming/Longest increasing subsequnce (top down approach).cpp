//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const int N = 1e5 + 7;
vector<int> v(N);
int dp[N];

int lis(int i)
{

    if (dp[i] != -1)
        return dp[i];
    int ans = 1;

    for (int j = 0; j < i; j++)
    {
        if (v[j] < v[i])
        {
            ans = max(ans, lis(j) + 1);
        }
    }

    return dp[i] = ans;
}

int main()
{
    optimize();
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int ans = 0;
    for (auto i = 0; i < n; i++)
    {
        ans = max(ans, lis(i));
    }
    cout << ans << el;

    r0;
}

/* 8
10 9 2 5 3 7 23 18

4
 */
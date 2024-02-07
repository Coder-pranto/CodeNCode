// https://practice.geeksforgeeks.org/problems/rod-cutting0840/1

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
#define allr(x)    (x).rbegin(), (x).rend()
#define kase       int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int dp[1010];

int func(int len, vector<int> &prices)
{
    int ans = 0;
    if (len == 0)
        return 0;
    if (dp[len] != -1)
        return dp[len];
    for (auto len_to_cut = 1; len_to_cut <= prices.size(); len_to_cut++)
    {
        if (len - len_to_cut >= 0)
        {
            ans = max(ans, func(len - len_to_cut, prices) + prices[len_to_cut - 1]);
        }
    }

    return dp[len] = ans;
}

int cutRod(int price[], int n)
{
    memset(dp, -1, sizeof(dp));
    vector<int> prices(price, price + n);

    return func(n, prices);
}
int main()
{
    optimize();

    r0;
}
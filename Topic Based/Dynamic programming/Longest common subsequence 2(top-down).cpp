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

const int N = 1e4+7;
int dp[N][N];

int longestCommonSubsequence(string &s1, string &s2, int n, int m)
{

    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }

    if (n == 0 || m == 0)
        return 0;

    int ans = 0;
    if (s1[n - 1] == s2[m - 1])
    {
        ans = max(ans, 1 + longestCommonSubsequence(s1, s2, n - 1, m - 1));
    }
    else
    {
        ans = max(longestCommonSubsequence(s1, s2, n - 1, m), longestCommonSubsequence(s1, s2, n, m - 1));
    }

    return dp[n][m] = ans;
}

int main()
{
    optimize();

    memset(dp, -1, sizeof(dp));
    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.size();
    int m = s2.size();

    int ans = longestCommonSubsequence(s1, s2, n, m);
    cout<<ans<<el;

    r0;
}
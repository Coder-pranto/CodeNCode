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

int dp[1005][1005];
int func(int i, int j, string &s1, string &s2)
{
    if (i < 0 || j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    int ans = func(i, j - 1, s1, s2);
    ans = max(ans, func(i - 1, j, s1, s2));
    ans = max(ans, func(i - 1, j - 1, s1, s2) + (s1[i] == s2[j]));

    return dp[i][j] = ans;
}

int longestCommonSubsequence(string text1, string text2)
{
    memset(dp, -1, sizeof(dp));
    int len1 = text1.size();
    int len2 = text2.size();
    return func(len1 - 1, len2 - 1, text1, text2);
}

int main()
{
    optimize();

    r0;
}
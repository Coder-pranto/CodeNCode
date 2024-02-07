// BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define el "\n"
#define r0 return 0
#define bb break
#define cc continue
#define sz(x) (int)x.size()
#define pb push_back
#define epb emplace_back
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define kase   \
    int tc;    \
    cin >> tc; \
    for (int z = 1; z <= tc; z++)

#define optimize()               \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)

class Solution
{
public: // algorithm made easy -> o(n^2)
    int countSubstrings(string s)
    {
        int n = s.size(), ans = 0;
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for (auto gap = 0; gap < n; gap++)
        {
            for (int i = 0, j = i + gap; j < n; i++, j++)
            {
                if (i == j){
                    ans++;
                    dp[i][j] = 1;
                }
                else if(gap == 1){
                    dp[i][j] = (s[i] == s[j])? 1: 0;
                     if(dp[i][j]) ans++;
                }else{
                    if(s[i] == s[j] and dp[i+1][j-1]){
                        dp[i][j] = 1;
                        ans++;
                    }
                }
            }
        }

        return ans;
    }
};

int main()
{
    optimize();

    r0;
}
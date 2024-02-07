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

const int N = 1e4+5;
int dp[N][N];

int main()
{
    optimize();

    memset(dp, 0, sizeof(dp));

    string s1, s2;
    cin >> s1 >> s2;

    int n = s1.size();
    int m = s2.size();
    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            ans = max(ans, dp[i][j]);
        }
    }

    cout << ans << el;

    r0;
}

/* 
Similar to Longest Common Subsequence LCS
If characters are equal : dp[i][j]=1 + dp[i-1][j-1]
else dp[i][j]=0 // this is the only change

int LongestCommonSubstr(string X, string Y) {
        
        int m=X.length();
        int n=Y.length();
        int dp[m+1][n+1];
        
        // initialization
        for(int i=0;i<=m;i++)
            dp[i][0]=0;   // Eg LCS of "abc" & "" = 0
        for(int j=0;j<=n;j++)
            dp[0][j]=0;   // Eg LCS of "" & "abc" = 0
        
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(X[i-1]==Y[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=0;                   // ONLY THIS CHANGE
            }
        }
    	 int maxLen=0;              // Now finding the max element
         for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
               maxLen=max(maxLen,dp[i][j]);
        }
        return maxLen;
		}


 */
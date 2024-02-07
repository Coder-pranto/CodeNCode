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

const int N = 1005;
int dp[N][N];

int main()
{
    optimize();

   // memset(dp, 0, sizeof(dp));

    string s1, s2;
    cin>>s1>>s2;
    int n = s1.length();
    int m = s2.length();

    for (auto i = 0; i <= n; i++)
    {
        for (auto j = 0; j <= m; j++)
        {
            if (i == 0 && j == 0)
                dp[i][j] = 0;
            else if (i == 0)
                dp[i][j] = dp[i][j - 1] + 1;
            else if (j == 0)
                dp[i][j] = dp[i - 1][j] + 1;
            else
            {
                if (s1[i - 1] == s2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1];
                else
                   dp[i][j] = 1+ min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
            }
        }
    }

    cout<<dp[n][m]<<el;

    r0;
}


/* 
 dp[i][j-1]  = insert;
 dp[i-1][j]  = remove
 dp[i-1][j-1]= replace */
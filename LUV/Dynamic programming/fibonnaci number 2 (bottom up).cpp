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
#define kase       int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)



int dp[1000];



int main()
{
    optimize();

    int n = 8;
    //* bottom-up approach
    dp[0] =0;
    dp[1] =1;

    for(int i =2; i<=n; i++){
        dp[i] = dp[i-1]+dp[i-2];
    }

    cout<<dp[n]<<el;

    r0;
}
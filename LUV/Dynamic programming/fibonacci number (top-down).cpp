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
//*top-down approach
int fib(int n){
    if(n ==0) return 0;
    if(n == 1) return 1;
    //memoise
    if(dp[n] != -1) return dp[n];
    return dp[n] = fib(n-1)+fib(n-2);
}

int main()
{
    optimize();

    memset(dp, -1, sizeof(dp));

    int n = 8;

    cout<<fib(n)<<el;

    r0;
}
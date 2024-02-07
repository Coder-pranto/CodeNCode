//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const int N = 1e5+7;
vector<int> v(N);
int dp[N];

int main()
{
    optimize();
    memset(dp, 0, sizeof(dp));
    int n;
    cin>>n;
    for(int i =0; i<n; i++){
        cin>>v[i];
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        dp[i] = 1;  // each element is a LIS of length 1
        for(int j=0; j<i; j++){
            if(v[j] < v[i]){
                dp[i] = max(dp[i], dp[j]+1);  // update LIS length
            }
        }
        ans = max(ans, dp[i]);  // update global max LIS length
    }

    cout<<ans<<el;

    r0;
}

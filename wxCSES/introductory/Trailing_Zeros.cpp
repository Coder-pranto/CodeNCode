//*https://www.youtube.com/results?search_query=Count+trailing+zeroes+in+factorial+of+a+number  for explanation

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


int findTrailingZeros(int n){
    int count =0;
    for(int i= 5; n/i >=1; i*=5){
        count += n/i;
    }
    return count;
}

int main()
{
    optimize();
    ll n;
    cin>>n;
    cout<<findTrailingZeros(n)<<el;

    r0;
}



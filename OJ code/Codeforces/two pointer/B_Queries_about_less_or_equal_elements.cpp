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

int main()
{
    optimize();

    ll n, m;
    cin >> n >> m ;
    vector<ll>v(n),w(m), ans;
    for(auto &i : v){
        cin >> i;
    }
    for(auto &i : w){
        cin >> i;
    }
    sort(all(v));

   for(auto i = 0; i < m; i++){
        ll p = upper_bound(v.begin(), v.end(), w[i]) - v.begin();
        ans.emplace_back(p);
    }
    for(auto &i : ans){
        cout<<i<<" ";
    }

    r0;
}
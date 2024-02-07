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

    ll x, n;
    cin >> x >> n;
    vector<ll> v ={0, x};

    for(auto i =0; i<n; i++){
        ll p; cin>>p;
        v.emplace_back(p);
        sort(all(v));
        ll mx = 0;

        for(auto j =0; j<sz(v); j++){
            mx = max(mx, v[j]-v[j-1]);
        }

        cout<<mx<<" ";
    }

    r0;
}
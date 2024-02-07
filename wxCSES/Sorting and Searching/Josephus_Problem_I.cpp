//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

typedef long long       ll;
#define el "\n"
#define r0 return 0
#define bb break
#define cc continue
#define sz(x)   (ll)x.size()
#define pb push_back
#define epb emplace_back
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(), (x).rend()
#define kase       int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    optimize();

    ll n; cin>>n;
    vector<ll>v;
    for(auto i =1; i<=n; i++){
        v.emplace_back(i);
    }


    while(sz(v)>1){
        vector<ll>support;
        for(auto i =0; i<sz(v); i++){
            if(i&1){
                cout<<v[i]<<" ";
            }else{
                support.emplace_back(v[i]);
            }
        }

        if(sz(v)%2 == 0){
            v = support;
        }else{
            int startElement = support.back();
            support.pop_back();
            v.clear();
            v.emplace_back(startElement);
            for(auto &u: support){
                v.emplace_back(u);
            }
        }
    }
    cout<<v[0]<<el;

    r0;
}

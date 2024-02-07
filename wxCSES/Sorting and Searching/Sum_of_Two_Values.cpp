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
    int n;
    ll m;
    cin>>n>>m;
    vector<pair<ll,ll> >v;

    for(int i=1; i<=n; i++){
        ll x;cin>>x;
        v.pb({x,i});
    }

    sort(all(v));

    // represents first pointer
    int i = 0;

    // represents second pointer
    int j = n - 1;

    while (i < j)
    {
        if (v[i].first + v[j].first == m)
        {
            cout << v[i].second << " " << v[j].second << el;
            return 0;
        }
        ((v[i].first + v[j].first < m) ? i++ : j--);
    }
    cout << "IMPOSSIBLE\n";

    r0;
}
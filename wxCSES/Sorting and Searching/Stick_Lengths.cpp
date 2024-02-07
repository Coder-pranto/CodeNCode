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
    cin >> n;
    vector<ll> v(n);
    for (auto &u : v)
    {
        cin >> u;
    }
    sort(all(v));

    ll median = v[n / 2], ans = 0;
    for (auto &u : v)
    {
        ans += abs(median - u);
    }
    cout << ans << el;

    r0;
}
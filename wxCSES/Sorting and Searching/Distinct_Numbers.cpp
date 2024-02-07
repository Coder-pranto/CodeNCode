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

int main()
{
    optimize();
    ll n;
    cin >> n;
    set<ll> st;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        st.insert(x);
    }

    cout << sz(st) << el;

    r0;
}
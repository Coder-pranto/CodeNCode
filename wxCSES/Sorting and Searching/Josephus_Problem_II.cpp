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

  ll n, k;
  cin>>n>>k;

    vector<ll> removal_order;
    for (auto i = 1; i <= n; i++) {
        removal_order.push_back(i);
    }

    int current = 0;
    while (!removal_order.empty()) {
        current = (current + k) % removal_order.size();
        cout << removal_order[current] << " ";
        removal_order.erase(removal_order.begin() + current);
    }

    r0;
}

// BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0
typedef long long ll;

#define optimize()               \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);

 ll Bigmod(ll b, ll p, ll m){
    if(p == 0) return 1;
    ll ans = Bigmod(b, p/2, m);
    ans = (ans *1LL* ans) % m;
    if(p&1) ans = (ans *1LL* b) % m;
    return ans;
 }

int main()
{
    optimize()
        ll b,
        p, m;
    while (cin >> b >> p >> m)
    {

        ll ans = Bigmod(b, p, m);

        cout << ans << el;
    }

    r0;
}
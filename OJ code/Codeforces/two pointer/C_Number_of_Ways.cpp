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

    ll n, quad = 0;
    cin >> n;
    vector<ll> v(n);
    for (auto &u : v)
    {
        cin >> u;
        quad += u;
    }

    if (quad % 3 == 0)
    {
        quad = quad / 3;
    }
    else
    {
        cout << 0 << el;
        return 0;
    }

    ll sum = 0;
    ll count1sumBy3 = 0;
    ll count2sumBy3 = 0;
    for (auto i = 0; i < n - 1; i++)
    {
        sum += v[i];
        if (sum == 2 * quad)
        {
            count2sumBy3 += count1sumBy3;
        }
        if (sum == quad)
        {
            count1sumBy3 += 1;
        }
    }

    cout << count2sumBy3 << el;

    r0;
}
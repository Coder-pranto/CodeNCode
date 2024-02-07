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
    for (auto &i : v)
    {
        cin >> i;
    }

    set<ll> s;

    int i = 0, j = 0;
    int ans = 0;
    while (i < n and j < n)
    {
        while (j < n and !s.count(v[j]))
        {
            // insert
            s.insert(v[j]);
            ans = max(ans, j - i + 1);
            j++;
        }

        while (j < n and s.count(v[j]))
        {
            s.erase(v[i]);
            i++;
        }
    }

    cout << ans << el;

    return 0;
}

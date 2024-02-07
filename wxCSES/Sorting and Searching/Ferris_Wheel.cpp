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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (auto &u : v)
    {
        cin >> u;
    }

    sort(all(v));

    int ans = 0, f_ptr = 0, l_ptr = n - 1;

    while (f_ptr <= l_ptr)
    {
        if (v[f_ptr] + v[l_ptr] <= k)
        {
            f_ptr++;
        }
        --l_ptr;

        ans++;
    }

    cout << ans << el;

    r0;
}
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

    optimize();
 
    ll n; //! must do use long long otherwise to taking integer leads to wrong answer. 
    cin >> n;
    vector<ll> v, u;
    ll sum = (n * (n + 1)) >> 1;
    if (sum & 1)
    {
        cout << "NO" << el;
    }
    else
    {
        cout << "YES" << el;
        ll mid = sum >> 1;
        for (auto i = n; i >= 1; i--)
        {
            if (i <= mid)
                {
                    v.epb(i);
                    mid -=i;
                }
            else
                u.epb(i);
        }
        cout << sz(v) << el;
        for (auto &x : v)
            cout << x << " ";
        cout << el;
 
        cout << sz(u) << el;
        for (auto &x : u)
            cout << x << " ";
        cout << el;
    }
}
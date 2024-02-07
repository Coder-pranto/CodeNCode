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
    
    ll x, n;
    cin >> x >> n;
    set<ll>position;
    multiset<ll>length;

    position.insert(0);
    position.insert(x);
    length.insert(x);

    for (auto i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        position.insert(a);
        auto it = position.find(a);
        int previous = *prev(it);
        int nextValue = *next(it);

        length.erase(length.find(nextValue - previous));
        length.insert(a - previous);
        length.insert(nextValue - a);

        cout<<*length.rbegin()<<' ';
    }

    r0;
}
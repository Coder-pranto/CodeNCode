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

const ll M = 1e9+7;

int BinaryExpo(int a, int n, ll m)
{ //* O(log(N))
   ll res = 1;
    while (n)
    {
        if (n % 2 == 1)
        {
            res = (res *1LL* a)%m;
            n--;
        }
        else
        {
            a = (a *1LL* a)%m;
            n /= 2;
        }
    }

    return res;
}

int main()
{
    optimize();

    ll n;
    cin>>n;
    cout<<BinaryExpo(2,n,M)<<el;

    r0;
}
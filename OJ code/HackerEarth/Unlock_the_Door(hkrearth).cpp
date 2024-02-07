//BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>

using namespace std;

typedef long long                        ll;

#define el        "\n"
#define r0        return 0


#define kase                        int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()                   ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FILE                         freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);


const ll M = 1e9+7;
const ll N = 1e5+10;

ll fact[N];

ll BigMod2(ll a,ll n, ll m)
{ 
   ll res = 1;
    while (n>0)
    {
        if (n % 2 == 1)
        {
            res = (res * a)%m;
            n--;
        }
        else
        {
            a = (a * a)%m;
            n >>= 1;
        }
    }

    return res;
}
int main()
{
    // FILE
    optimize()

    fact[0]= 1;
    for(ll i = 1; i<N; i++){
        fact[i] = (fact[i-1] *1LL* i)%M;
    }

    kase{
        ll n,k;
   
        cin>>n>>k;
        ll ans = (fact[k]);
        ll den = (fact[k-n]);
        cout<<(ans*BigMod2(den, M-2, M))%M<<el;
    }

    return 0;
}
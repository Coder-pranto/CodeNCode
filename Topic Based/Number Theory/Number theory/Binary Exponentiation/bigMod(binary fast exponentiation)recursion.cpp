// BISMILLAHIR RAHMANIR RAHIM

#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int M = 1e9 + 7;

// a^b % m where a,b,m <= 2^31 //*O(log b).

long int bigmod(int a, int b, int m)
{
    if (b == 0)
        return 1;
    if (b % 2 == 0)
    {
        long int x = bigmod(a, b / 2, m);
        return (x * x) % m;
    }
    else
    {
        return ((long int)a % m * bigmod(a, b - 1, m)) % m;
    }
}

int main()
{

    int variable = 2, power = 31, mod = 45;
    long int ans = bigmod(variable, power, mod);
    cout << ans << "\n";

    return 0;
}


/*  ll Bigmod(ll b, ll p, ll m){
    if(p == 0) return 1;
    ll ans = Bigmod(b, p/2, m);
    ans = (ans *1LL* ans) % m;
    if(p&1) ans = (ans *1LL* b) % m;
    return ans;
 }
 */
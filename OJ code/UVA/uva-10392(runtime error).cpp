// BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define el "\n"
#define r0 return 0

#define optimize()               \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);

#define M 10000007

bitset<M> mark;
vector<int> prime;

void sieve()
{
    for (int i = 3; i * i <= M; i += 2)
        if (mark[i] == false) // i is a prime
            for (int j = i * i; j <= M; j += i)
                mark[j] = true;

    prime.emplace_back(2);
    for (int i = 3; i <= M; i += 2)
    {
        if (mark[i] == false)
            prime.emplace_back(i);
    }
}


void ListDivisor(long long n)
{
    for (int i = 0; i < prime.size() && prime[i] <= sqrt(n); i++)
    {
        if (n % prime[i] == 0)
        {
            while (n % prime[i] == 0)
            {
                n /= prime[i];
                cout << " " << prime[i] << el;
            }
        }
    }
    if (n > 1)
    {
        cout << " " << (n) << "\n";
    }

}

int main()
{
    // FILE
    optimize()
        sieve();
    ll n;
    while ((cin >> n) && n != -1)
    {
        if (n < 0)
            n *= (-1);
        ListDivisor(n);
         cout<<el;
    }

    r0;
}
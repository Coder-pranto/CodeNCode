//BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>

using namespace std;

typedef long long                        ll;
#define r0        return 0
#define kase                        int tc; cin>>tc; for(int z=1;z<=tc;z++)
#define optimize()                   ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



#define M 32000
vector<int> primes;


void sieve()
{
    bool mark[M];
    for (int i = 3; i * i <= M; i++)
    {
        if (mark[i] == false)
        {
            for (int j = i * i; j <= M; j += i + i)
            {
                mark[j] = true;
            }
        }
    }

  primes.emplace_back(2);
  for (int i = 3; i <= M; i += 2)
  {
    if (mark[i] == false)
      primes.emplace_back(i);
  }

}
vector<long long> v;
void segmentedSieve(ll n, ll m)
{
  n += (n == 1);
  int mx = m - n + 1;
  int arr[mx + 1];
  for (int i = 0; i <= mx; i++)
    arr[i] = 0;
  for (auto p : primes)
  {
    if (p * p <= m)
    {
      ll g = (n / p) * p;
      if (g < n)
                g += p;
      while (g <= m)
      {
                if (g != p)
                {
                    arr[g - n] = 1;
                }
                g += p;
      }
    }
  }

  for (int i = 0; i < mx; i++)
  {
    if (arr[i] == 0)
      cout << n + i << "\n";
  }

  cout << "\n";
}

int main()
{

   optimize()

  kase
  {
    ll n, m;
    cin >> n >> m;

    sieve();
    segmentedSieve(n, m);
  }

  r0;
}


/* Input:
problem: PRIME1 - Prime Generator(spoj)

2
1 10
3 5

Output:
2
3
5
7

3
5 */
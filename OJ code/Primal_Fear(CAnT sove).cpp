//BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>

using namespace std;

typedef long long                        ll;
typedef unsigned long long               llu;
typedef long double                      ld;
typedef vector<int>                      vi;
typedef vector<ll>                       vl;

#define el        "\n"
#define r0        return 0


#define kase                        int tc; cin>>tc; for(int z=1;z<=tc;z++)
#define case_print                  cout<<"Case "<<z<<": "
#define dcml(x)                     cout<<fixed<<setprecision(x)
#define sz(x)                       (int )x.size()

#define optimize()                   ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FILE                         freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);



#define M 1000000
bitset<M> mark;
vector<int> primes;

void sieve()
{
    int n = M;
  for (int i = 3; i * i <= n; i += 2)
  {
    if (mark[i] == false)
    {
      for (int j = i * i; j <= n; j += i + i)
      {
        mark[j] = true;
      }
    }
  }

primes.emplace_back(2);
for(auto i =3; i<=n; i+=2){
    if(mark[i] == false)
    primes.emplace_back(i);

}


}

int main()
{
// FILE
optimize()

    sieve();
kase
{
    int n;
    cin >> n;

    auto it = upper_bound(primes.begin(), primes.end(), n) - 1;
    int cnt = it - primes.begin() + 1;

    cout << cnt << el;
}



return 0;
}

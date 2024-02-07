#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pb push_back
#define epb emplace_back

ll ls [10000007];
int listSize;
bitset<10000007>bs;
vector<ll>prime;

void sieve(ll mx){
    bs.set();
    bs[0]=bs[1]=0;
    prime.epb(2);
    for(ll i = 3; i<=mx+1; i+=2){
        if(bs[i]){
            for(ll j = i*i; j<=mx; j+=i){
                bs[j]=0;
            }
            prime.push_back(i);
        }
    }

}
void primeFactors(ll n)
{
    listSize = 0;
    for (int i = 0; prime[i] * prime[i] <= n; i++)
    {
        if (n % prime[i] == 0)
        {
            ls[listSize] = prime[i];
            listSize++;
            while (n % prime[i] == 0)
            {
                n /= prime[i];
            }
        }
    }
  if(n>1){
    ls[listSize] = n;
    listSize++;
  }
    if(listSize>1)
    cout<<ls[listSize -1]<<"\n";
    else
    cout<<"-1"<<"\n";
}



int main() {
    ll n;

    sieve(10000007);
    while (scanf("%lld", &n) && n != 0) {
       if(n<0) n*=(-1);
      primeFactors(n);
    }
    return 0;
}

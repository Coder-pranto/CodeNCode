#include <bits/stdc++.h>
using namespace std;


#define M 100000
vector<int> prime;
bitset<M> mark;
vector<int>ls;


void sieve()
{
    for (int i = 2; i * i <= M; i++)
        if (mark[i] == false) // i is a prime
            for (int j = i + i; j <= M; j += i)
                mark[j] = true;

    for (int i = 2; i <= M; i++)
        if (mark[i] == false) // i is a prime
            prime.push_back(i);
}

long long countDivisor(long long n)
{
    long long divisor = 1;
    for (int i = 0; i < prime.size() && prime[i] <= sqrt(n); i++)
    {
        if (n % prime[i] == 0)
        {
            int cnt = 0;
            while (n % prime[i] == 0)
            {
                cnt++;
                n /= prime[i];
            }
            divisor *= cnt + 1;
        }
    }
    if (n > 1)
        divisor *= 2;
    return divisor;
}

void ListDivisor(long long n)
{
    for (int i = 0; i < prime.size() && prime[i] <= sqrt(n); i++)
    {
        if (n % prime[i] == 0)
        {
            int cnt = 0;
            while (n % prime[i] == 0)
            {
                ls.emplace_back(prime[i]);
                n /= prime[i];
            }
        }
    }
    if (n > 1)
    {
        ls.emplace_back(n);
    }
}

vector<int> primeFactors(int n)
{
  vector<int> v;
  if (n % 2 == 0) {
   
    while (n % 2 == 0) {v.push_back(2);n /= 2;}
  }
  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) {
      
      while (n % i == 0){v.push_back(i);n /= i;}
    }
  }
  if (n > 2)v.push_back(n);
  return v;
}

int main()
{
    // sieve();

    // cout << countDivisor(36)<<endl; // this is efficient for large 'n'
    // cout << countDivisor(24)<<endl; // this is efficient for small 'n'

    // ListDivisor(36);

    // for (auto u : ls)
    // {
    //     cout << u << " ";
    // }
    // cout<<endl;
    // ls.clear();

    // ListDivisor(24);

    // for (auto u : ls)
    // {
    //     cout << u << " ";
    // }

    // ls.clear();

    vector<int> v1 = primeFactors(24);
    for(auto &u : v1){
        cout<<u<<" ";
    }

    cout<<"\n";
    vector<int> v2 = primeFactors(36);
    for(auto &u : v2){
        cout<<u<<" ";
    }

    cout<<"\n";
    vector<int> v3 = primeFactors(17);
    for(auto &u : v3){
        cout<<u<<" ";
    }

    cout<<"\n";




}
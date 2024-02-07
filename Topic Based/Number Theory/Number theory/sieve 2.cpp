#include <bits/stdc++.h>
using namespace std;

#define M 100000
bitset<M> mark;
vector<int> primes;
void sieve(int n)
{
  for (int i = 3; i * i <= n; i += 2)
  {
    if (mark[i] == false)
    { // i is a prime
      for (int j = i * i; j <= n; j += i + i)
      {
        mark[j] = true;
      }
    }
  }

  primes.emplace_back(2);
  for (int i = 3; i <= n; i += 2)
  {
    if (mark[i] == false)
      primes.emplace_back(i);
  }
}

bool isPrime(int n)
{
  if (n < 2)
    return false;
  if (n == 2)
    return true;
  if (n % 2 == 0)
    return false;
  return mark[n] == false;
}

int main()
{
  int n;
  cin >> n;
  sieve(n);

  cout << (isPrime(n) == 1 ? "prime\n" : "not a prime\n");

  for (int i = 0; i < (int)primes.size(); i++)
    cout << primes[i] << '\n';
}
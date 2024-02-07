#include <bits/stdc++.h>
using namespace std;

vector<bool> mark(100000000, false);
vector<long long> v;
void sieve()
{
    long long int n = 100000000;
    for (auto i = 3; i * i <= n; i += 2)
    {
        if (mark[i] == false)
        {
            for (auto j = i * i; j <= n; j += i + i)
            {
                mark[j] = true;
            }
        }
    }

    auto j = 0;
    v.emplace_back(2);
    for (auto i = 3; i <= n; i += 2)
    {
        if (mark[i] == false)
        {
            v.emplace_back(i);
            j++;
        }
    }
    for (auto i = 1; i <= j; i += 100)
        cout << v[i - 1] << "\n";
}

int main()
{
      sieve();
}


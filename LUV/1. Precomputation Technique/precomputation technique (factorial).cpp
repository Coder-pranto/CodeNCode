

// BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e5 + 10;
long long fact[N];

int main()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; i++)
    {
        fact[i] = fact[i - 1] * i;
    }

    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;

        cout << "factorial of " << n << ": " << fact[n] << "\n";
    }

    return 0;
}

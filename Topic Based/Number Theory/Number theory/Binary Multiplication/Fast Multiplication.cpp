// BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int multiply(int a, int b, int c)
{
    int res = 0;
    while (b)
    {
        if (b & 1)
        {
         res = res + 1LL * a, res %= c;
        }
        a += 1LL * a;
        a %= c;

        b /= 2;
    }
    return res;
}
int main()
{
    cout << multiply(20, 20, mod);
    return 0;
}

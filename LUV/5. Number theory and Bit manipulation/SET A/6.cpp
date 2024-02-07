// BISMILLAHIR RAHMANIR RAHIM

//* Power of Four (leetcode)

#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()               \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);

bool isPowerOfFour(int n)
{
    if (n < 0)
        return false;
    if (__builtin_popcount(n) == 1)
    {
        int k = floor(log2(n) + 1);
        if (k & 1)
            return true;
    }

    return false;
}

int main()
{
    optimize() int n;
    cin >> n;
    cout << isPowerOfFour(n);

    r0;
}
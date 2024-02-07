
// BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

/// GCD

// recursive(Euclid's algorithms)
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int _gcd(int a, int b)
{
    return (b == 0 ? a : gcd(b, a % b));
}

// without recursive
// GCD(normal form)
int __gcd(int a, int b)
{
    int ans;
    for (int i = 1; i < min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
            ans = i;
    }

    return ans;
}

/// Lcm

// bruteforce
int lcm(int a, int b)
{
    for (int i = 1;; i++)
        if (i % a == 0 && i % b == 0)
            return i;
}

int _lcm(int a, int b)
{
    return (a / gcd(a, b)) * b; // avoid overflow
}

int main()
{
    cout << gcd(20, 40) << endl;
    cout << _gcd(6, 4) << endl;
    cout << __gcd(6, 4) << endl;
    cout << lcm(3, 7) << endl;
    cout << _lcm(3, 7) << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    //* Compute the biggest power of 2 that is a divisor of x. Example: f(12) = 4
    int x = 12;

    cout << (1 << __builtin_ctz(x)) << endl;
    //* Compute the smallest power of 2 that is not smaller than x. Example: f(12) = 16

    cout << (1 << (32 - __builtin_clz(x - 1))) << endl;

    //* Detect if two integers have opposite signs
    int x = 100, y = -100;
    cout << (((x ^ y) < 0) ? "Signs are opposite" : "Signs are not opposite") << endl;
    

    return 0;
}
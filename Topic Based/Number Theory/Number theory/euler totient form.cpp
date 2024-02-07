// https://progkriya.org/gyan/basic-number-theory#section7
// BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

int phi(int n)
{
    int result = n; // Initialize result as n
    if (n == 1)
        return 1;
    for (int p = 2; p * p <= n; ++p) // Consider all prime factors of n and subtract their multiples from result
    {
        if (n % p == 0) // Check if p is a prime factor.
        {
            while (n % p == 0) // If yes, then update n and result
            {
                n /= p;
            }
            result -= result / p;
        }
    }

    if (n > 1)
    {
        result -= result / n;
    } // If n has a prime factor greater than sqrt(n)(There can be at-most one such prime factor)
      // এই case টি তখনই হবে যখন n  নিজেই একটি প্রাইম সংখ্যা হবে,যা আগে কোন প্রাইম দিয়ে ভাগ যায়নি
    
    return result;
}



int main()
{
    int n = 16;

    cout << n << " = " << phi(n) << endl;

    return 0;
}

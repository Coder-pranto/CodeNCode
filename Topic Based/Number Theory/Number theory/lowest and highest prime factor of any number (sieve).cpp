#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;

vector<bool> isPrime(N, 1);
vector<int> lp(N, 0), hp(N, 0);

void sieve()
{
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= N; i++)
    {
        if (isPrime[i] == true)
        {
            lp[i] = hp[i] = i; // prime no er lowest and highest prime oi prime no nijei
            for (int j = i + i; j <= N; j += i)
            {
                isPrime[j] = false;
                hp[j] = i;
                if (lp[j] == 0)
                {
                    lp[j] = i;
                }
            }
        }
    }

    //* lowest and higest prime factor of any number
    for (int i = 1; i < 100; ++i)
    {
        cout << i << " : " << lp[i] << " " << hp[i] << endl;
    }

    //*prime factorization

    int num = 36;
    vector<int> prime_factors;

    while (num > 1)
    {
        int prime_factor = hp[num];
        while (num % prime_factor == 0)
        {
            num /= prime_factor;
            prime_factors.push_back(prime_factor);
        }
    }
    for (auto &u : prime_factors)
    {
        cout << u << " ";
    }
    cout << endl;
}

int main()
{

    sieve();

    return 0;
}

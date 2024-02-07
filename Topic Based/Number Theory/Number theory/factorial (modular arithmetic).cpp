// BISMILLAHIR RAHMANIR RAHIM

#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int Modulo = 1e9 + 7;

int main()
{
    int n;
    cin >> n;
    int M = 47;
    long long fact = 1;
    for (int i = 2; i <= n; ++i)
    {
        fact = (fact * i) % M;
    }

    cout << fact;

    int nn;
    cin >> nn;

    long long factt = 1;
    for (int i = 2; i <= n; ++i)
    {
        factt = (factt * i) % Modulo;
    }

    cout << fact;

    return 0;
}

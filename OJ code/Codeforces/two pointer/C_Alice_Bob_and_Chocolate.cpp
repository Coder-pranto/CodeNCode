#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &u : v)
    {
        cin >> u;
    }

    int a = 0, b = 0, cnta = 0, cntb = 0, sumA = 0, sumB = 0;

    while (a + b < n)
    {
        if (sumA <= sumB)
        {
            ++cnta;
            sumA += v[a];
            ++a;
        }
        else
        {
            ++cntb;
            sumB += v[n - 1 - b];
            b++;
        }
    }

    cout << cnta << " " << cntb << "\n";
}
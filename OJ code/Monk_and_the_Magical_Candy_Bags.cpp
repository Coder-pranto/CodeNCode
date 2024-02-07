#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        multiset<long long> ms;
        int n, k;
        cin >> n >> k;
        for (size_t i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            ms.insert(x);
        }
        long long total = 0;
        for (int i = 0; i < k; i++)
        {
            auto it = (--(ms.end()));
            long long x = (*it);
            total += (x);
            ms.erase(it);
            ms.insert(x/2);
        }

        cout << total << endl;
    }

    return 0;
}
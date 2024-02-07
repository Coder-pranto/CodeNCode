
//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    optimize();
    int n;
    cin >> n;
    vector<long long> v(n);
    for (auto &u : v)
    {
        cin >> u;
    }
   long long moves = 0;
    int len = v.size();

    for (int i = 1; i <len; i++)
    {
        if (v[i] < v[i - 1])
        {
            moves += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }

    cout << moves << el;

    r0;
}

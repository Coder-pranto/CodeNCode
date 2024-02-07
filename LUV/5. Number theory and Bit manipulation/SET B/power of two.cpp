//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    optimize()

//! 1st approach
    int n = 16;
    int cnt = 0;

    //* right shift
    while (n != 0)
    {
        if (n & 1)
            cnt++;
        n = n >> 1;
    }

    if (cnt == 1)
    {
        cout << "Power of two\n";
    }
    else
    {
        cout << "Not a power of two\n";
    }

    cnt = 0;

    //* left shift
    int m = 29;
    for (int i = 0; i < 31; i++)
    {
        if (m & (1 << i))
            cnt++;
    }

    if (cnt == 1)
    {
        cout << "Power of two\n";
    }
    else
    {
        cout << "Not a power of two\n";
    }
//! 2nd approach

    int x = 16;
    if (x & (x - 1) == 0)
        cout << "Yes\n";
    else
        cout << "No\n";
    r0;
}
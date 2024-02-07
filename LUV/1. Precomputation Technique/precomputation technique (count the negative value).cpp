// BISMILLAHIR RAHMANIR RAHIM

//* count the number in an array
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int hash_arr[N];
int shift = 1000;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
        hash_arr[arr[i]+shift]++;
    }

    int testcase;
    cout << "Testcase: " << endl;
    cin >> testcase;
    while (testcase--)
    {
        int x;
        cin >> x;
        cout << "The number of " << x << " in array: " << hash_arr[x+shift] << endl;
    }

    return 0;
}


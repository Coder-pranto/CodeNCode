//BISMILLAHIR RAHMANIR RAHIM
//*Print all the subsets of an array

#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    optimize()

        int n;
    cin >> n;
    int arr[n];
    for (auto &u : arr)
    {
        cin >> u;
    }

    int total = 1 << n; // 2^n

    for (int i = 1; i < total; i++)
    {
        cout << "[";
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                cout <<" "<< arr[j] << " ";
        }
        cout << "]" << el;
    }

    r0;
}
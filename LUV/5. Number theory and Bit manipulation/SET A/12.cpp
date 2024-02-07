//BISMILLAHIR RAHMANIR RAHIM
//*Paying up - codechef

#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    optimize()

        int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (auto &u : arr)
        {
            cin >> u;
        }

        int total = 1 << n; // 2^n
        
        bool flag = false;

        for (int i = 1; i < total; i++)
        {    int sum = 0;
            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                {
                    sum += arr[j];
                }
            }
            if (sum == m)
            {
                flag = true;
                break;
            }
        }

        cout << (flag == true ? "Yes" : "No") << el;
    }

    r0;
}
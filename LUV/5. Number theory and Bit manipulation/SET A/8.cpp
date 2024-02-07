//BISMILLAHIR RAHMANIR RAHIM

//* find the missing number from a consequtive sequence
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
    int ans = 0;
    int z = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        ans ^= x;
    }
    for (int i = 1; i <= n; i++)
        z ^= i;

    cout <<( z ^ ans) << el;

    r0;
}
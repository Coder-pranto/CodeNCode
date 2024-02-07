//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    optimize();
    string s;
    cin >> s;
    int len = s.length();
    int mx = 0, left = 0, right = 0;
    while (right < len)
    {
        if (s[left] == s[right])
        {
            mx = max(mx, right - left + 1);
            right++;
        }
        else
        {
            left = right;
            right++;
        }
    }

    cout << mx << el;

    r0;
}
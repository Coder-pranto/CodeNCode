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
    int cnt = 1, mx = 1;
    char c = s[0];
    for (auto i = 1; i < len; i++)
    {
        if (c == s[i])
        {
            cnt++;
        }
        else
        {
            cnt = 1;
            c = s[i];
        }
 
        mx = max(mx, cnt);
    }
 
    cout << mx << el;
 
    r0;
}
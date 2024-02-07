//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

typedef long long       ll;
#define el "\n"
#define r0 return 0
#define bb break
#define cc continue
#define sz(x)   (int )x.size()
#define pb push_back
#define epb emplace_back
#define all(x)     (x).begin(),(x).end()
#define kase       int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    optimize();
    string s;
    cin >> s;
    int len = sz(s);
    unordered_map<char, int> m;
    for (int i = 0; i < len; i++)
    {
        m[s[i]]++;
    }

    int cnt = 0;
    char ch;
    for (auto &u : m)
    {
        if (u.second & 1)
        {
            cnt++;
            ch = u.first;
        }
    }

    if ((cnt > 1) | (cnt > 0 && len % 2 == 0))
    {
        cout << "NO SOLUTION" << el;
        return 0;
    }

    string temp, res = "";

    for (auto &u : m)
    {
        for (int i = 0; i < u.second / 2; i++)
        {
            res += u.first;
        }
    }
    temp = res;
    if (len % 2)
        temp += ch;

    reverse(all(res));
    temp += res;
    cout << temp << el;
    ;

    r0;
}
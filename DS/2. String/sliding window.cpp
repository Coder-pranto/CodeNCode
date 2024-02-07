//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    optimize();

    string s = "abcfgabcdabc";
    int len = s.size();
    string t = "abc";
    int len2 = t.size();
    string temp;
    int ans = 0;
    for (int i = 0; i < len2; i++)
    {
        temp += s[i];
    }
    if (temp == t)
        ans++;
    for (auto i = len2; i < len; i++)
    {
        temp += s[i];
       // temp.erase(temp.begin()); // Deletes character at position 0
        temp.erase(0,1);        // Deletes 1 characters from index number 0
        if (temp == t)
            ans++;
    }
    cout << ans << el;

    r0;
}
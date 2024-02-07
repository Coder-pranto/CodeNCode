#include <bits/stdc++.h>
using namespace std;

bool cmp(int &a, int &b)
{
    return a > b;
}

bool cmp3(pair<int, int> &a, pair<int, int> &b)
{
    if (a.first != b.first)
        return a > b;
    else
        return a < b;
}

bool cmp2(int &a, int &b)
{
    cout << a << " " << b << " ";
    if (a > b)
    {
        cout << "true : means no swap" << endl;
        return true;
    }
    else
    {
        cout << "false : means need swap" << endl;
        return false;
    }
}
int main()
{

    vector<int> v = {2, 5, 1, 4, 666, 42, 21, 48, 45};
    sort(v.begin(), v.end(), cmp);

    for (auto u : v)
        cout << u << " ";
    cout << endl
         << endl;

    vector<pair<int, int>> vp = {{4, 5}, {3, 6}, {5, 6}, {5, 2}, {9, 10}};
    sort(vp.begin(), vp.end(), cmp3);

    for (auto u : vp)
        cout << u.first << " " << u.second << endl;

    // more explanation how it works
    vector<int> v2 = {2, 5, 1, 4, 666, 42, 21, 48, 45};
    sort(v2.begin(), v2.end(), cmp2);

    for (auto u : v2)
        cout << u << " ";
    cout << endl;

    return 0;
}
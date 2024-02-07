#include <bits/stdc++.h>
using namespace std;
/* given N strings, print unique strings in lexicographical order with their frequency. */
int main()
{
    map<pair<string, string>, vector<int>> m;
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        string fn, ln;
        int sub;
        cin >> fn >> ln >> sub;
        for (int j = 0; j < sub; j++)
        {
            int x;
            cin >> x;
            m[{fn, ln}].emplace_back(x);
        }
    }

    for (auto &ptr : m)
    {
        auto &name = ptr.first;
        auto &sub = ptr.second;

        cout << name.first << " " << name.second << endl;

        for (auto &list : sub)
            cout << list << " ";
        cout << "\n ";
    }
    return 0;
}
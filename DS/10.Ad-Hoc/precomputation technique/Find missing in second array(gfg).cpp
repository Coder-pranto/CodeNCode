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
#define allr(x)    (x).rbegin(), (x).rend()
#define kase       int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main()
{
    optimize();
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> w(m);
    for (auto &i : v)
    {
        cin >> i;
    }
    for (auto &j : w)
    {
        cin >> j;
    }
    
    unordered_set<int> st(w.begin(), w.end());

    for (auto &i : v)
    {
        if (st.find(i) == st.end())
        {
            cout << i << " ";
        }
    }

    r0;
}
// Input: N = 6, M = 5
// A[] = {1, 2, 3, 4, 5, 10}
// B[] = {2, 3, 1, 0, 5}
// Output: 4 10
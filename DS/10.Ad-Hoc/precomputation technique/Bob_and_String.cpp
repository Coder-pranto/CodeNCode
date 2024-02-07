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

    kase
    {
        string s, t;

        cin >> s >> t;

        int a[27] = {0};

        int b[27] = {0};

        for (int i = 0; i < s.size(); i++)
        {

            a[s[i] - 96]++;
        }

        for (int i = 0; i < t.size(); i++)
        {

            b[t[i] - 96]++;
        }

        int ctr = 0;

        for (int i = 0; i < 27; i++)
        {

            ctr += abs(a[i] - b[i]);
        }

        cout << ctr << endl;
    }
    r0;
}
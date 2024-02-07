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
        int n, k;
        cin >> n >> k;
        vector<int> c(n, 0), d(n, 0);
        vector<int> prefix(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            cin >> c[i - 1] >> d[i - 1];
            prefix[i] = prefix[i - 1] + c[i - 1];
        }
        int profit = 0;
        for (int i = 0; i < n; i++)
        {
            int mx = 0, mn = INT_MAX;
            for (int j = i; j < n; j++)
            {
                int te = 0, fe = 0;
                te = (j - i + 1) * k;
                fe = prefix[j + 1] - prefix[i];

                mx = max(mx, d[j]);
                mn = min(mn, d[j]);
                int sq = (mx - mn) * (mx - mn);
                int tee = 0;
                tee = te - fe - sq;
                profit = max(profit, tee);
            }
        }
        cout << profit << endl;
    }

    r0;
}
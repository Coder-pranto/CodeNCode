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

const int N = 510;
ll dist[N][N];

void reset()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            dist[i][j] = 0;
        }
    }
}

int main()
{
    optimize();

    reset();
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int a;
            cin >> a;
            dist[i][j] = a;
        }
    }

    vector<int> del_order(n);
    for (auto &u : del_order)
    {
        cin >> u;
    }

    reverse(all(del_order));
    vector<ll> ans;

    for (int k = 0; k < n; k++)
    {
        int k_v = del_order[k];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k_v] + dist[k_v][j]);
            }
        }
        ll sum = 0;
        for (int i = 0; i <= k; i++)
        {
            for (int j = 0; j <= k; j++)
            {
                sum += dist[del_order[i]][del_order[j]];
            }
        }

        ans.pb(sum);
    }
    reverse(all(ans));
    for (auto &u : ans)
    {
        cout << u << " ";
    }

    r0;
}

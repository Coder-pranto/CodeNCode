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

int n, m;
const int N = 1e5+7;
const int INF = 1e9;
int cost =0;
vector<vector<int>>g[N];
vector<int>dist(N);
vector<int>parent(N);
vector<bool>vis(N);

void prims(int source)
{
    for (int i = 1; i < n; i++)
    {
        dist[i] = INF;
    }

    set<pair<int, int>> st;
    dist[source] = 0;
    st.insert({0, source}); //{weight, vertex}
    while (!st.empty())
    {
        auto p = *(st.begin());
        st.erase(p);
        int u = p.second;
        int v = parent[u];
        int wt = p.first;
        vis[u] = true;
        cout << u << " " << v << el;
        cost += wt;
        for (auto e : g[u])
        {
            int next_edge = e[0];
            int edge_wt = e[1];
            if (!vis[next_edge])
            {
                if (dist[next_edge] > edge_wt)
                {
                    st.erase({dist[next_edge], next_edge});
                    dist[next_edge] = edge_wt;
                    st.insert({dist[next_edge], next_edge});
                    parent[next_edge] = u;
                }
            }
        }
    }

    cout<<cost<<el;
}

int main()
{
    optimize();
    cin>>n>>m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin>>u>>v>>w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
        }
        prims(0);

    r0;
}

/* 4 5 
0 1 10
1 2 15
0 2 5
3 1 2
3 2 40
  */
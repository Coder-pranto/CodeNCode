#include<bits/stdc++.h>
using namespace std;


#define INF 1e9+7
typedef pair<int,int> pii;
const int N = 1e5+10;

int dijkstra(int source, int n, vector<pii> g[N])
{
    vector<int> vis(N, 0);
    vector<int> dis(N, INF);
 
    set<pii> st;
    st.insert({0, source});
    dis[source] = 0;

    while (st.size() > 0)
    {
        auto node = *(st.begin());
        int v = node.second;
        int v_dist = node.first;
        st.erase(st.begin());
        if (vis[v])
            continue;
        vis[v] = 1;
        for (auto child : g[v])
        {
            int child_v = child.first;
            int wt = child.second;
            if (dis[child_v] > v_dist + wt)
            {
                dis[child_v] = dis[v] + wt;
                st.insert({dis[child_v], child_v});
            }
        }
    }
    int ans = 0;
    for (size_t i = 0; i <= n; i++)
    {
        if (dis[i] == INF)
            return -1;
        else
        {
            ans = max(ans, dis[i]);
        }
    }

    return ans;
}
 int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pii>g[N];
        for(auto u: times){
            g[u[0]].push_back({u[1], u[2]});
        }

        return dijkstra(k, n, g );
    }




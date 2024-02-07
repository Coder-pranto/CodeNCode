#include<bits/stdc++.h>
using namespace std;


#define INF 1e9+7
typedef pair<int,int> pii;
const int N = 1e5+10;

vector<pii> g[N];// node, wt
vector<int> vis(N, 0);
vector<int> dis(N, INF);

void dijkstra(int source)
{
    set<pii> st;
    st.insert({0, source});// wt,node
    dis[source] = 0;

    while (st.size() > 0)
    {
        auto node = *(st.begin());
        int v_dist = node.first;
        int v = node.second;
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
                dis[child_v] = dis[v] + wt; //*or dis[child_v] = v_dist + wt;
                st.insert({dis[child_v], child_v});
            }
        }
    }
}

int main()
{

    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 1; i <= edges; i++){
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
    }

    cout << "Enter source: ";
    int source; cin >> source;

    dijkstra(source);

       for (int i = 1; i <= nodes; i++){
        cout << "Node: " << i << " Distance: ";
        if (dis[i] == INF) cout << "inf" << "\n";
        else cout << dis[i] << "\n";
    }

    return 0;
}

/* 

input : 
5 6
1 2 2
1 3 1
2 3 1
1 4 3
4 5 2
5 3 5
enter source : 1


output:
Node: 1 Distance: 0
Node: 2 Distance: 2
Node: 3 Distance: 1
Node: 4 Distance: 3
Node: 5 Distance: 5

 */
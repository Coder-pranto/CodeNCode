#include<bits/stdc++.h>
using namespace std;

#define MX 105
#define INF 1e9+7
typedef pair<int,int> pii;

vector<pii> G[MX];
bool vis[MX];
int dist[MX];

void reset(){
    for (int i = 0; i < MX; i++){
        G[i].clear();
        vis[i] = 0;
        dist[i] = INF;
    }
}

void dijkstra(int source)
{
    priority_queue<pii, vector<pii>, greater<pii>> PQ;
    PQ.push({0, source}); // distance er basis e sort hobe (decreasing order)

    while (!PQ.empty())
    {
        pii current = PQ.top();
        int node = current.second;
        int cost = current.first;
        PQ.pop();

        if (vis[node] == 1)
            continue; // if visited, then we do not work with that node

        vis[node] = 1;
        dist[node] = cost; // cost is finalized here

        for (auto child : G[node])
        {
            int nxt = child.first;
            int nxtCost = child.second;
            if (vis[nxt] == 0)
            {
                PQ.push({cost + nxtCost, nxt});
            }
        }
    }
}

int main()
{

    reset();

    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 1; i <= edges; i++){
        int u, v, w;
        cin >> u >> v >> w;
        G[u].push_back({v, w});
    }

    cout << "Enter source: ";
    int source; cin >> source;

    dijkstra(source);

    for (int i = 1; i <= nodes; i++){
        cout << "Node: " << i << " Distance: ";
        if (dist[i] == INF) cout << "inf" << "\n";
        else cout << dist[i] << "\n";
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
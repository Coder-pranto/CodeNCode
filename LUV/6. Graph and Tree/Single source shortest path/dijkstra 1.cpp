// Dijkstra's Algorithm (Using priority queue)
// Watch Striver graph series on youtube I learned from there
#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

void Dijkstra(vector<pair<int, int>> adj[], int source, int n)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq; // Min-Heap storing will store distance and node
    vector<int> dist(n, INT_MAX);
    dist[source] = 0;
    pq.push({0, source});

    while (!pq.empty())
    {
        int distance = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto child : adj[node])
        {
            int next_node = child.first;
            int next_weight = child.second;
            if (dist[next_node] > distance + next_weight)
            {
                dist[next_node] = dist[node] + next_weight;
                pq.push({dist[next_node], next_node});
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << dist[i] << " ";
    }
}
int main()
{
    int vertex, edges;
    cout << "ENTER THE NUMBER OF VERTEX AND EDGES:" << endl;
    cin >> vertex >> edges;

    vector<pair<int, int>> adj[vertex];

    int u, v, w;
    cout << "ENTER THE LINK AND THEN WEIGHT:" << endl;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }


    int source;
    cout << "ENTER THE SOURCE NODE FROM WHICH YOU WANT TO CALCULATE THE SHORTEST DISTANCE:" << endl;
    cin >> source;


    Dijkstra(adj, source, vertex);


    return 0;
}


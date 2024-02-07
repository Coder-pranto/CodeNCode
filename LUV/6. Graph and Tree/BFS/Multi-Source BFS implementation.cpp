// BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0
typedef long long ll;
#define optimize()    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int N = 1e5 + 10;
vector<int> G[N];
int vis[N];
int dist[N];
// int level[N]; // level and distance are same thing

void bfs(vector<int> sources)
{
    queue<int> q;

    for (int i = 0; i < sources.size(); i++)
    {
        int source = sources[i];
        vis[source] = 1;
        dist[source] = 0;
        q.push(source);
    }
    while (!q.empty())
    {
        int cur_v = q.front();
        q.pop();

        for (auto child : G[cur_v])
        {
            if (!vis[child])
            {
                q.push(child); // push to queue
                vis[child] = 1; // visit
                dist[child] = dist[cur_v] + 1; // update
            }
        }
    }
}

int main()
{
    optimize() int nodes, edges;
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        int u, v;

        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int numberOfSources;
    cin >> numberOfSources;

    vector<int> sources;
    for (int i = 1; i <= numberOfSources; i++)
    {
        int source;
        cin >> source;
        sources.push_back(source);
    }

    bfs(sources);

    for (int i = 1; i <= nodes; i++)
    {
        if (dist[i] == 0)
            continue; // it is a telephone booth
        cout << "Distance of " << i << " is : " << dist[i] << endl;
    }

    r0;
}




/* 

input:
10 13
1 2
1 3
2 4
3 4
1 5
3 6
5 6
6 7
5 10
6 10
9 10
7 9
8 9
3
1 7 10


output: 
Distance of 2 is : 1
Distance of 3 is : 1
Distance of 4 is : 2
Distance of 5 is : 1
Distance of 6 is : 1
Distance of 8 is : 2
Distance of 9 is : 1


 */
// BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0
#define optimize()     ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 1e5 + 10;
vector<int> G[N];
int vis[N];
int level[N];

bool bfs(int source, int destination)
{
    queue<int> q;
    q.push(source);
    vis[source] = 1;

    while (!q.empty())
    {
        int cur_v = q.front();
        q.pop();

        if (cur_v == destination)
        {
            return true;
        }

        for (auto child : G[cur_v])
        {
            if (!vis[child])
            {
                q.push(child); // push to queue
                vis[child] = 1; // visit
                level[child] = level[cur_v] + 1; // update level or distance
            }
        }
    }

    return false;
}

int main()
{
    optimize();

    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        G[x].push_back(y);
    }

    int source, destination;
    cin >> source >> destination;

    bool pathExists = bfs(source, destination);

    if (pathExists)
    {
        cout << "Path exists between " << source << " and " << destination << el;
    }
    else
    {
        cout << "Path does not exist between " << source << " and " << destination << el;
    }

    r0;
}

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

void bfs(int source)
{ 
    queue<int> q;
    q.push(source);
    vis[source] = 1;

    while (!q.empty())
    {
        int cur_v = q.front();
        q.pop();
        cout << cur_v << " ";
        for (auto child : G[cur_v])
        {
            if (!vis[child])
            {
                q.push(child);// push to queue
                vis[child] = 1;//visit
                level[child] = level[cur_v] + 1;//update level or distance
            }
        }
    }
    cout << endl;
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
        G[y].push_back(x);
    }

    bfs(1);

    for (int i = 1; i <= n; i++)
    {
        cout << i << " :" << level[i] << " "
             << "\n";
    }

    r0;
}

/* input:
13
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8
8 12
4 9
4 10
10 11


uses for shortest path finding
 */



/*  while (!q.empty())
    {
        int cur_v = q.front();
        q.pop();
          for (int i = 0; i < G[cur_v].size(); i++){
            int child = G[cur_v][i];
            if (vis[child] == 0){
                q.push(child); // push to queue
                vis[child] = 1; // visit
                dist[child] = dist[cur_v] + 1; // update
            }
        }
        
    } */
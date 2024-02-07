//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>

using namespace std;

#define kase                        int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()                   ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


const int N = 1e4+5;
vector<int> graph[N];
bool vis[N];
int cnt;

void dfs(int vertex)
{
    cnt++;
    vis[vertex] = true;

    for (int child : graph[vertex])
    {
        if (vis[child])
            continue;
        dfs(child);
    }
}

int main()
{
    // FILE
    optimize()

        kase
    {
        int n, e, k;
        cin >> n >> e >> k;
        for (size_t p = 0; p < e; p++)
        {
            int i, j;
            cin >> i >> j;
            graph[i].push_back(j);
        }

        for (int p = 0; p < k; p++)
        {
            int g;
            cin >> g;
            if (!vis[g])
                dfs(g);
        }

        cout << cnt << "\n";
        cnt = 0;
        fill(vis, vis + N, false);
        for (int i = 0; i < n; i++)
        {
            graph[i].clear();
        }
    }

    return 0;
}

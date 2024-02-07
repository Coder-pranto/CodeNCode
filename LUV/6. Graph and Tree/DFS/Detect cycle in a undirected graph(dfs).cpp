//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>

using namespace std;



const int N = 1e5+10;
vector<int>graph[N];
bool vis[N];

bool dfs(int vertex, int parent)
{
    vis[vertex] = true;
    bool isLoopExist = false;
    for (auto child : graph[vertex])
    {
        if (vis[child] && child == parent)
            continue;
        if (vis[child])
            return true;

        isLoopExist |= dfs(child, vertex);
    }

    return isLoopExist;
}

int main()
{
    

    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    bool isLoopExist = false;
    for (size_t i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            if (dfs(i, 0))
            {
                isLoopExist = true;
                break;
            }
        }
    }

    cout << "is there any loop ? : " <<( isLoopExist ? "yes": "No") << endl;
    

    return 0;
}
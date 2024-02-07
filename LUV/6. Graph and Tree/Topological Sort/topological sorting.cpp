// BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;
void dfs(int n, vector<int> &vis, vector<int> adj[], stack<int> &stk)
{
    vis[n] = 1;
    for (auto child : adj[n])
    { 
        if(!vis[n])
        {
            dfs(child, vis, adj, stk);
        }
    }
    stk.push(n);
}
vector<int> toposort(int v, vector<int> adj[])
{
    vector<int> vis(v, 0);
    stack<int> stk;
    vector<int> ans;
    for (auto i = 0; i < v; i++)
    {
        if (!vis[i])
        {
            dfs(i, vis, adj, stk);
        }
    }

    while (!stk.empty())
    {
        int top = stk.top();
        stk.pop();
        ans.emplace_back(top);
    }

    return ans;
}

int main()
{
    vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
    int n = 6;
    vector<int> ans = toposort(n, adj);
    for(auto i : ans){
        cout<<i<<"->";
    }

    return 0;
}
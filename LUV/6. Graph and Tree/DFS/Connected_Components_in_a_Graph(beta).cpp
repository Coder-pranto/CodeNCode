//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>

using namespace std;

#define el        "\n"
#define r0        return 0

#define optimize()                   ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


const int N = 1e5+10;
vector<int>graph[N];
bool vis[N];

vector<vector<int>> ccc;
vector<int>temp;

void dfs(int vertex){
    vis[vertex] = true;
    temp.emplace_back(vertex);
    for(auto child : graph[vertex]){
        if(!vis[child])
        dfs(child);
    }
}

int main()
{
    // FILE
    optimize()

        int n,e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int cnt = 0;
    for (size_t i = 1; i <= n; i++) //* take a look here i must start with 1;
    {
        if (!vis[i])
        {
        dfs(i);
        ccc.push_back(temp);
        temp.clear();
        cnt++;
        }
    }

    cout <<"Total connected component: "<< cnt << el;

    for(auto u : ccc){
        for(auto w: u){
            cout << w << " ";
        }

        cout<<"\n";
    }

    return 0;
}
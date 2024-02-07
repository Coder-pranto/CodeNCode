//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

typedef long long       ll;
#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const int N = 1e5+7;
vector<int>g[N];
vector<int>result;
bool vis[N];

void dfs(int src){
    vis[src] = true;
    for(auto &child : g[src]){
        if(!vis[child]){
            dfs(child);
        }
    }

    result.push_back(src);
}

int main()
{
    optimize();

    int n, e;
    cin>>n>>e;
    for(int i =0; i<e; i++){
        int a, b;
        cin>>a>>b;
        g[a].push_back(b);
    }

    for(int i =1; i<=n; i++){
        if(!vis[i])
        dfs(i);
    }

    reverse(result.begin(), result.end());

    cout<<"\nTopological Order: ";
    for(auto &u : result){
        cout<<u<<" ";
    }

    r0;
}

/* 

input: 
5 4
1 2
3 2
2 4 
2 5


output: 
Topological Order: 3 1 2 5 4
  */
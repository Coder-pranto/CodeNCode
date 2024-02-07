//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

typedef long long       ll;
#define el "\n"
#define r0 return 0
#define bb break
#define cc continue
#define sz(x)   (int )x.size()
#define pb push_back
#define epb emplace_back
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(), (x).rend()
#define kase       int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

vector<int>g[1000];

int vis[1000];
int in[1000], low[1000];
 int timer = 1;

void dfs(int v, int parent){
    vis[v] =1;
    in[v] = timer;
    low[v] = timer;
    timer++;

    for(auto child: g[v]){
        if(child != parent){
            if(vis[child]){
                low[v] = min(low[v], in[child]);
            }else{
                dfs(child, v);
                if(low[child]>in[v]){
                    cout<<v<<"->"<<child<<el;
                }
                low[v] = min(low[v], low[child]); 
            }
        }
    }
   
}

int main()
{
    optimize();

    int n,m;cin>>n>>m;
    for(int i =0; i<m; i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1,-1);


    r0;
}

/* 5 5
1 2
2 3
3 4
4 5
5 3

ans: 
2->3
1->2 */
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
#define kase       int tc; cin>>tc; for(int z=1;z<=tc;z++)

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)


#define MX 105
#define INF 1e9+7
typedef pair<int,int> pii;

vector<pii> G[MX];
bool vis[MX];
int dist[MX];

void reset(){
    for (int i = 0; i < MX; i++){
        G[i].clear();
        vis[i] = 0;
        dist[i] = INF;
    }
}

int dijkstra(int source, int time)
{
    priority_queue<pii, vector<pii>, greater<pii>> PQ;
    PQ.push({0, source}); // distance er basis e sort hobe (decreasing order)
    
    int cnt = 0;
    while (!PQ.empty())
    {
        pii current = PQ.top();
        int node = current.second;
        int cost = current.first;
        PQ.pop();

        if (vis[node] == 1)
            continue;

        vis[node] = 1;
        dist[node] = cost;
        //new added,
        if (dist[node] <= time)
            cnt++;

        for (auto child : G[node])
        {
            int nxt = child.first;
            int nxtCost = child.second;
            if (vis[nxt] == 0)
            {
                PQ.push({cost + nxtCost, nxt});
            }
        }
    }

    return cnt;
}

int main()
{
optimize() ;

kase{
    reset();
   int n, e, t, m;
   cin>>n>>e>>t>>m;

    for (int i = 1; i <= m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        G[v].push_back({u, w}); //doing reverse
    }

   int ans =  dijkstra(e, t);

    if(z>1) cout<<el;
        cout<<ans<<el;  

}
    
    return 0;
}

/* 

input : 
1

4
2
1
8
1 2 1
1 3 1
2 1 1
2 4 1
3 1 1
3 4 1
4 2 1
4 3 1

output:
3
 */
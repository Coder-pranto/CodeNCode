// BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define r0 return 0

#define optimize()               \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)

const int N = 1e5 + 10;
const int INF = 1e9 + 10;
vector< pair<int,int> > G[N];
vector<int> level(N, INF);
int n, m;

int bfs()
{ 
    deque<int> q;
    q.push_back(1);
    level[1] = 0;
    while (!q.empty()){
        int cur_v = q.front();
        q.pop_front();
        for(auto child: G[cur_v]){
            int child_v = child.first;
            int weight = child.second;
            if(level[cur_v]+weight<level[child_v]){
                level[child_v] = level[cur_v]+weight;
                if(weight == 1)
                q.push_back(child_v);
                else
                q.push_front(child_v);
            }
        }
    }

    return level[n] == INF ? -1 : level[n] ;
}

int main()
{
    optimize();

    cin >> n>>m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        if(x == y) continue;
        G[x].push_back({y,0});
        G[y].push_back({x, 1});
    }
    cout<<bfs()<<el;
    

    r0;
}

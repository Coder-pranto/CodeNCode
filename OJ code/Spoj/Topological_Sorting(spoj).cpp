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

#define White 0
#define Black 2
#define Gray 1

const int N = 1e5 + 7;
vector<int> g[N];
vector<int> res;
bool cycle;

int color[N];

void dfs(int src)
{
    color[src] = Gray;

    sort(g[src].begin(), g[src].end());

    int len = g[src].size();

    for (int i = len - 1; i >= 0; i--)
    {
        int child = g[src][i];
        if (color[child] == White)
        {
            dfs(child);
        }
        else if (color[child] == Gray)
        {
            cycle = true;
            return;
        }
    }

    color[src] = Black;
    res.push_back(src);
}

int main()
{
    optimize();

    cycle = false;

    int n, e;
    cin>>n>>e;

    for(int i =0; i<e; i++){
        int a, b;
        cin>>a>>b;
        g[a].pb(b);
    }

    for(int i = n; i>=1; i--){
        if(color[i] == White ){
            dfs(i);
        }
    }

    if(cycle){
        cout<<"Sandro fails.\n";
    }else{
        int len = res.size();
        for(int i = len -1; i>=0; i--){
            cout<<res[i]<<" ";
        }
        cout<<el;
    }

    r0;
}
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

const int N = 1e4+5;
int parent[N];
int size_d[N];

//O(E log E).
void make(int v){
    parent[v] = v;
    size_d[v] = 1;
}

int Find( int v){
    if(v == parent[v]) return v;
    else return parent[v] = Find(parent[v]); // path compression
}

void Union(int u, int v)
{
    int pu = Find(u);
    int pv = Find(v);
    if (pu != pv)
    {
        if (size_d[pu] < size_d[pv])
            swap(pu, pv);

        parent[pv] = pu;
        size_d[pu] += size_d[pv];
    }
}

int main()
{
    optimize();

    int node, k;
    cin >> node >> k;
    for (int i = 1; i <= node; i++)
    {
        make(i);
    }
    vector<pair<int, pair<int, int>>> edges;
    while (k--)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back({wt, {u, v}});
    }

    sort(edges.begin(), edges.end());

    int total_cost = 0;

    for (auto &edge : edges)
    {
        int cost = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        if (Find(u) == Find(v))
        {
            continue;
        }
        Union(u, v);

        total_cost += cost;
        cout << u << " " << v << el;
    }

    cout << "Total Cost : " << total_cost << el;

    r0;
}


/*

 6 9
5 4 9
1 4 1
5 1 4
4 3 5
4 2 3
1 2 2 
3 2 3
3 6 8
2 6 7


output:
1 4
1 2
3 2
5 1
2 6
Total Cost : 17
 */
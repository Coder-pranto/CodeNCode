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


void make(int v){
    parent[v] = v;
    size_d[v] = 1;
}

int find( int v){
    if(v == parent[v]) return v;
    else return parent[v] = find(parent[v]); // path compression
}

void Union(int u, int v)
{
    int pu = find(u);
    int pv = find(v);
    if (pu != pv)
    {
        if (size_d[pu] < size_d[pv])
            swap(pu, pv);

        parent[pv] = pu;
        size_d[pu] += size_d[pv];
    }
}


bool isFriend(int u , int v){
    int pu = find(u);
    int pv = find(v);
    if (pu == pv) return true;
    else return false;
}
int main()
{
    optimize();

    int node, k;
    cin >> node >> k;
    for (int i = 0; i < node; i++)
    {
        make(i + 1);
    }

    while (k--)
    {
        int u, v;
        cin >> u >> v;
        Union(u, v);
    }

    int component_cnt = 0;

    for (int i = 1; i <= node; i++)
    {
        if (parent[i] == i)
            component_cnt++;
    }

    cout <<"Total component: " <<component_cnt << el;
    cout<<parent[4]<<el;
    cout<<parent[2]<<el;
    cout<<parent[3]<<el;
    cout<<parent[5]<<el;
    cout<<parent[7]<<el;
    cout<<parent[8]<<el;

    cout<<"Are they stay in same set: "<<(isFriend(7,8) ? "Yes": "No")<<el;

    r0;
}


/* 

input:
 8  6


1 2
1 3
3 4
4 5
6 7
6 8

output : 2
 */
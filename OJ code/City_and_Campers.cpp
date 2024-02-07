//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

typedef long long       ll;
#define el "\n"
#define r0 return 0

#define optimize()         ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const int N = 1e6+5;
int parent[N];
int size_d[N];
multiset<int>st;

void make(int v){
    parent[v] = v;
    size_d[v] = 1;
    st.insert(1);
}

int Find( int v){
    if(v == parent[v]) return v;
    else return parent[v] = Find(parent[v]); // path compression
}


void mergeTwo(int a, int b){
   
    st.erase(st.find(size_d[a]));
    st.erase(st.find(size_d[b]));

    st.insert(size_d[a]+size_d[b]);
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
        mergeTwo(pu,pv);
        size_d[pu] += size_d[pv];
    }
}

int main()
{
    optimize();

    int node, q;
    cin >> node >> q;
    for (int i = 0; i < node; i++)
    {
        make(i + 1);
    }

    while (q--)
    {
        int u, v;
        cin >> u >> v;
        Union(u, v);
        if (st.size() == 1)
        {
            cout << 0 << el;
        }
        else
        {
            int x = *(st.begin());
            int y = *(--(st.end()));
            cout <<(y - x) << el;
        }
    }

    r0;
}

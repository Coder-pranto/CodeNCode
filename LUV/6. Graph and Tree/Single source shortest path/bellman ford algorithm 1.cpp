//BISMILLAHIR RAHMANIR RAHIM
#include <bits/stdc++.h>
using namespace std;

vector<int> bellman_ford(int V, vector<vector<int>> &edges, int S)
{
    vector<int> dist(V + 1, 1e9);
    dist[S] = 0;
    for (int i = 0; i < V - 1; i++)
    {
        for (auto e : edges)
        {
            int src = e[0];
            int des = e[1];
            int wt  = e[2];

            if (dist[src] != 1e9 and (dist[src] + wt < dist[des]))
            {
                dist[des] = dist[src] + wt;
            }
        }
    }

    // checking negative edge cycle
    bool flag =0;
    for (auto e : edges)
    {
        int src = e[0];
        int des = e[1];
        int wt  = e[2];

        if (dist[src] != 1e9 and (dist[src] + wt < dist[des]))
        {
           flag = 1;
        }
    }

    if(flag) return {-1};

    return dist;
}


int main()
{

    return 0;
}
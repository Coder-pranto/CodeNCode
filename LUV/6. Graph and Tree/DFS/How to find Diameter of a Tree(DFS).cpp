/*
  Given Q queries, Q<=10^5
  In each query given V,
  Print subtree sum of V & Number of even numbers 
  in subtree of V

  */
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>graph[N];
int depth[N];


void dfs(int vertex, int parent=-1)
{  
    for (int child : graph[vertex])
    {
        if (child == parent)
            continue;
        depth[child] = depth[vertex]+1;
        dfs(child, vertex);
    }
}

//O(v+e)~~O(v+(2*e))

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(1);
    int mx_depth = -1;
    int mx_d_node;
    for (int i = 1; i <= n; i++)
    {
        if (depth[i] > mx_depth)
        {
            mx_depth = depth[i];
            mx_d_node = i;
        }
        depth[i] = 0; // full depth array reset;
    }

    dfs(mx_d_node);
    mx_depth = -1;
    for (int i = 1; i <= n; i++)
    {
        if (depth[i] > mx_depth)
        {
            mx_depth = depth[i];
        }
    }

    cout << "Diameter: " << mx_depth << endl;

    return 0;
}

/* input:
13
1 2
1 3
1 13
2 5
3 4
5 6
5 7
5 8
8 12
4 9
4 10
10 11

output = 8

 */
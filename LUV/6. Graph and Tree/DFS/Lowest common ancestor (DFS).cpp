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

int par[N];

void dfs(int vertex, int parent = -1)
{
    par[vertex] = parent;

    for (int child : graph[vertex])
    {
        if (child == parent)
            continue;
        dfs(child, vertex);
    }
}

vector<int> path(int vertex)
{
    vector<int> ans;
    while (vertex != -1)
    {
        ans.push_back(vertex);
        vertex = par[vertex];
    }
    reverse(ans.begin(), ans.end());

    return ans;
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

    int x, y;
    cin >> x >> y;
    vector<int> path_x = path(x);
    vector<int> path_y = path(y);
    int minimum_length = min(path_x.size(), path_y.size());
    int LCA = -1;
    for (int i = 0; i < minimum_length; i++)
    {
        if (path_x[i] == path_y[i])
        {
            LCA = path_x[i];
        }
        else
        {
            break;
        }
    }

    cout <<"LCA : "<< LCA << endl;

    return 0;
}
//check out "binary uplifting" for LCA(log(N))
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
then put : 9 11

LCA: 4


 */
// BISMILLAHIR RAHMANIR RAHIM
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

#define el "\n"
#define optimize()               \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);

#define WHITE 1
#define GRAY  2
#define BLACK 3
int color[100];

int arr[100][100];
int node, edge;

int Time = 1;
int startTime[100];
int endTime[100];

stack<int>ans;

void make_adj_matrix(int N, int E)
{
    for (size_t k = 0; k < E; k++)
    {
        int i, j;
        cin >> i >> j;
        arr[i][j] = 1;
        arr[j][i] = 1;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
}

void dfsVisit(int x)
{
    color[x] = GRAY;
    startTime[x] = Time;
    ++Time;

    for (int i = 0; i < node; i++) // find_the_neighbour_node_of_a_node
    {
        if (arr[x][i] == 1)
        {
            if (color[i] == WHITE)
            {
                dfsVisit(i);
            }
        }
    }

    color[x] = BLACK;
    endTime[x] = Time;
    ++Time;
    ans.push(x);
}

void dfs()
{
    for (int i = 0; i < node; i++)
    {
        color[i] = WHITE;
    }
    for (int i = 0; i < node; i++)
    {
        if (color[i] == WHITE)
        {
            dfsVisit(i);
        }
    }
}

//* approach: (starting+finsishing time)+ stacking using DFS

int main()
{

    cin >> node >> edge;

    make_adj_matrix(node, edge);
    dfs();
    cout << "After topological sort: ";
    while (!ans.empty())
    {
        cout << ans.top() << " ";
        ans.pop();
    }

    return 0;
}

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

int parent[100];
int dis[100];

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


void bfs(int startingNode)
{
    for (int i = 0; i < node; i++)
    {
        color[i] = WHITE;
        dis[i] = INT_MIN;
        parent[i] = -1;
    }

    dis[startingNode] = 0;
    parent[startingNode] = -1;

    queue<int> q;
    q.push(startingNode);
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        color[x] = GRAY;
        cout<<x<<"\t";
        for (int i = 0; i < node; i++)
        {
            if (arr[x][i] == 1)
            {
                if (color[i] == WHITE)
                { // x er neighbor i // x no node hocce i no node er parent
                    dis[i] = dis[x] + 1;
                    parent[i] = x;
                    q.push(i);
                }
            }
        }
        color[x] = BLACK;
    }
}

int main()
{

    cin >> node >> edge;

    make_adj_matrix(node, edge);
    int startingNode = 0;
    bfs(startingNode);

    cout<<"\n"<<parent[5]<<endl;
    cout<<dis[6];



    return 0;
}
/* 

 8 7
 0 1
 0 2
 1 3
 2 4
 2 5
 3 6
 3 7

 */